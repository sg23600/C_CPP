//interchange the smallest and largest elements in an array
#include <stdio.h>

int main()
{
    void read_array(int [], int);
    int min_pos(int [], int), max_pos(int [], int);
    void transform_array(int [], int, int);
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    read_array(arr, n);

    int min = min_pos(arr, n);
    int max = max_pos(arr, n);
    transform_array(arr, min, max);

    printf("\nNew Array\n");
    for (int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
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

int min_pos(int arr[], int n)
{
    int pos = 0;
    int min = arr[0];
    for (int i=1; i<n; i++)
    {
        if(min > arr[i])
            {
                min = arr[i];
                pos = i;
            }
    }
    return pos;
}

int max_pos(int arr[], int n)
{
    int pos = 0;
    int max = arr[0];
    for (int i=1; i<n; i++)
    {
        if(max < arr[i])
           {
               max = arr[i];
               pos = i;
           }
    }
    return pos;
}

void transform_array(int arr[], int min_pos, int max_pos)
{
    arr[min_pos] = arr[min_pos] + arr[max_pos];
    arr[max_pos] = arr[min_pos] - arr[max_pos];
    arr[min_pos] = arr[min_pos] - arr[max_pos];
}