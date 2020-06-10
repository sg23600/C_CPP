// display pascal's triangle
#include <stdio.h>

int main()
{
    int num, val;
    int comb(int, int);

    printf("Enter number of layers\n");
    scanf("%d", &num);

    for(int i=0; i<num; i++)
    {
        for(int j=0; j<i; j++)
        {
            val = comb(i, j);
            printf("%d\t", val);
        }
            printf("1\n");
    }
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else 
        return n * fact(n-1);

}

int comb(int n, int m)
{
    return (fact(n) / (fact(m) * fact(n-m)));
}