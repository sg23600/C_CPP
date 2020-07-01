// sum of corresponding elements of m*n matrix
#include <stdio.h>

void main()
{
    int m, n; 
    int **inputArray(int, int), **sumArray(int**, int**, int, int);
    printf("Enter no. of rows and columns: ");
    scanf("%d %d", &m, &n);

    int **arr1, **arr2;
    printf("\nINPUT ARRAY 1\n");
    arr1 = inputArray(m, n);
    printf("\nINPUT ARRAY 2\n");
    arr2 = inputArray(m, n);

    int **sum = sumArray(arr1, arr2, m, n);

    printf("\nSUM\n");
    for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d\t", sum[i][j]);
            } printf("\n");
        }
}

int **inputArray(int m, int n)
{
    int **arr = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
    }
    
  return arr;
}

int **sumArray(int **arr1, int **arr2, int m, int n)
{
     int **arr = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++)
        arr[i] = (int *)malloc(sizeof(int) * n);
    
    for (int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            arr[i][j] = arr1[i][j] + arr2[i][j];

    return arr;
}