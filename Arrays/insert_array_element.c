#include <stdio.h>
#include <math.h>

int main()
{
    int InsertArr(int[], int, int, int);
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("\nInput Array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        printf("\n");
    }

    int pos,val;
    printf("\nEnter position, value: ");
    scanf("%d %d", &pos, &val);

    *arr = InsertArr(arr, n, pos, val);
    printf("\nNew Array\n");
    for(int i=0; i<n+1; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

int InsertArr(int arr[], int n, int pos, int val)
{
    for(int i=n; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos] = val;
    return *arr;
}