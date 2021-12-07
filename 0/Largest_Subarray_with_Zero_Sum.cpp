int maxLen(vector<int>&A, int n)
    {   
        int sum=0, sol=0;
        unordered_map<int,int> m;
        for(int i=0; i<n; i++)
        {
            sum+=A[i];
            if(sum==0)
            {
                sol=i+1;
            }
            else if(m.find(sum)!=m.end()) //if sum exists already
            {
                sol=max(sol, i-m[sum]);
            }
            else
            {
                m[sum]=i;
            }
        }
        return sol;
    }
