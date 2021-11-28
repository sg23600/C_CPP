int equalPartition(int N, int arr[])
    {
        // code here
        int sum = accumulate(arr, arr+N, 0);
        
        if(sum%2==1) return 0;
        
        
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
        
        return dp[N][sum/2]? 1:0;
    }
