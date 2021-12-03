class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         int n1=m-l+1;
         int n2=r-m;
         
         int left[n1];
         for(int i=0; i<n1; i++) left[i]=arr[l+i];
         int right[n2];
         for(int i=0; i<n2; i++) right[i]=arr[m+1+i];
         
         int i=0,j=0,k=l;
         
         while(i<n1 and j<n2)
             arr[k++] = left[i]<right[j] ? left[i++] : right[j++];
         
         while(i<n1)
             arr[k++]=left[i++];
         
         while(j<n2)
             arr[k++]=right[j++];
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r)
        {
            int m=l+((r-l)/2);
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            
            merge(arr,l,m,r);
        }
    }
};
