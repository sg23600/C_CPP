// transpose of a matrix
#include <stdio.h>

void main()
{
    int m, n;
    printf("Enter no. of rows and columns: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];

    printf("\nINPUT ARRAY\n");

    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nGIVEN ARRAY\n");
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        } printf("\n");
    }
    

    printf("\nTRANSPOSE\n");
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[j][i]);
        } printf("\n");
    }

}