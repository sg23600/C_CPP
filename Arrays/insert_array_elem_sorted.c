//insert a number in an already sorted array
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements ");
    scanf("%d", &n);
    int arr[n+1];
    
    printf("\nInput Array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int val, pos;
    printf("Enter value to be inserted ");
    scanf("%d", &val);

    for(int i=0; i<n; i++)
    {
        if(val > arr[i])
        {
            pos = i + 1;
            break;
        }
    }

    for(int i=n; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos] = val;

    printf("\nNew Array\n");
    for(int i=0; i<n+1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}