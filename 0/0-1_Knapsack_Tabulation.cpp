// Tabulation in for loop... O(N*W)
int knapSack(int W, int wt[], int val[], int n) 
    { 
        int dp[n+1][W+1];
        int sol = 0;
        
        // for(int i=0; i<=W; i++) dp[0][i]=0;
       for(int i=0; i<=n; i++)
       {
           for(int j=0; j<=W; j++)
           {
               if(i==0 or j==0) 
                    dp[i][j] = 0;
               
               else if(j >= wt[i-1])
                    dp[i][j] = max(
                        dp[i-1][j],
                        (dp[i-1][j-wt[i-1]]+val[i-1])
                    );
               
               else 
                    dp[i][j] = dp[i-1][j];
           }
       }
    
        return dp[n][W];
    }

// Recursion using memorization... O(N*W)
int dp[n][W]; 
memset(dp, -1, sizeof(dp));

int knapSack(int W, int wt[], int val[], int n) 
    { 
        if(n==0 or W==0) return 0;
        
        if(dp[n][W]!=-1) return dp[n][W];
        
        if(wt[n-1] > W) return dp[n][W] = knapSack(W, wt, val, n-1);
        else 
            return dp[n][W] = max(
            knapSack(W, wt, val, n-1),
            val[n-1] + knapSack(W-wt[n-1], wt, val, n-1)
            );
    }
