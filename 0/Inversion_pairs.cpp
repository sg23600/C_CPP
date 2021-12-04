#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
   long long merge(long long arr[], long long temp[], long long l, long long m, long long r)
    {
        long long count=0;
         
         long long i=l,j=m,k=l;
         
         while(i<=m-1 and j<=r){
             
             if(arr[i]<=arr[j])
             {
                temp[k++] =  arr[i++];
                 
             } else
             {
                 temp[k++] = arr[j++];
                 count=count+(m-i); 
             }
        }
         while (i <= m-1)
            temp[k++] = arr[i++];
        while (j<=r)
            temp[k++] = arr[j++];
        for (i = l; i<=r; i++)
            arr[i] = temp[i];
             
         return count;
         
    }
    long long mergeSort(long long arr[], long long temp[], long long l, long long r)
    {
        long long m,count=0;
        if(l<r)
        {
           m=(l+r)/2;
            count+=mergeSort(arr, temp, l, m);
            count+=mergeSort(arr, temp, m+1, r);
            
           count+=merge(arr,temp,l,m+1,r);
        }
        return count;
    }
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
         long long temp[N];
        return mergeSort(arr,temp,0,N-1);
    }

};
