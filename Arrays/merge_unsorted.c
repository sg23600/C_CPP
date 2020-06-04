//merge twoo unsorted arrays
#include <stdio.h>

int N = 0;

int main()
{
    int Input_Array(int[], int);

    int n;
    printf("Enter number of elements in array 1\t");
    scanf("%d", &n);
    int a[n];
    *a = Input_Array(a, n);

    int m;
    printf("Enter number of elements in array 2\t");
    scanf("%d", &m);
    int b[m];
    *b = Input_Array(b, m);
    
    int c[n+m];

    for (int i=0; i<n+m; i++)
    {
        if (i<n)
        c[i] = a[i];

        else
        c[i] = b[i-n];
    }    

    printf("\nNew Array\n");
    for(int i=0; i<n+m; i++)
    {
        printf("%d\t", c[i]);
    }
}

int Input_Array(int arr[], int n)
{
    N+=n;
    printf("\nInput Array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    return *arr;
}
