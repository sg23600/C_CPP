int *findTwoElement(int *arr, int n) {
        // code here
        static int sol[2];
        for(int i=0; i<n; i++)
        {
            if(arr[abs(arr[i])-1] > 0) // mark negative if not visited
            arr[abs(arr[i])-1] *= -1;
            else sol[0] = abs(arr[i]); // repeated value found
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i] > 0)
            sol[1] = i+1;
        }
        return sol;
    }
