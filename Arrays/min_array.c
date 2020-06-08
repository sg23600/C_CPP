//find smallest element in an array
#include <stdio.h>

int main()
{
    void read_array(int [], int);
    int n;
    int minimum(int [], int);
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    read_array(arr, n);
    printf("\nSmallest element: %d", minimmum(arr, n));
    return 0;    
}

void read_array(int arr[], int n)
{
    printf("\nInput Array\n");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int minimmum(int arr[], int n)
{
    int min = arr[0];

    for(int i=1; i<n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

