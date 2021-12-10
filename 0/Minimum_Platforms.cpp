int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int count=1, sol=1;
    	int i=0,j=1;
    	while(i<n and j<n)
    	{
    	    if(arr[j]<=dep[i])
    	    {
    	        count++;
    	        j++;
    	    }
    	    else
    	    {
    	        count--;
    	        i++;
    	    }
    	    sol=max(sol,count);
    	}
    	return sol;
    }
