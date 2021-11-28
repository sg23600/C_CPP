// Tabulation method
bool isSubsetSum(int N, int arr[], int sum)
    {
        // code here 
        bool dp[N+1][sum+1];
        memset(dp, false, sizeof(dp));
        
         for (int i = 0; i <= N; i++)
            dp[i][0] = true;
        for (int i = 1; i <= sum; i++)
            dp[0][i] = false;
            
        for(int i=1; i<=N; i++)
        {
            int e = arr[i-1];
            for(int j=1; j<=sum; j++)
                dp[i][j] = j >= e ? dp[i-1][j-e] || dp[i-1][j] : dp[i][j] = dp[i-1][j];
        }
        return dp[N][sum];
    }
