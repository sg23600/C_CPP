//deleting an array element
#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of elements ");
    scanf("%d", &n);

    int arr[n];
    printf("\nInput Array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int val;
    printf("\nEnter value to be deleted ");
    scanf("%d", &val);

    for(int i=0; i<n; i++)
    {
        if (val == arr[i])
        {
            for(int j=i; j<n; j++)
            {
                arr[j] = arr[j+1];
            }
        }
    }
    arr[n] = '/0';
    n--;
    
    printf("\nNew Array\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}