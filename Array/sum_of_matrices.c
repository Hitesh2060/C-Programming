/*WAP to input two matrix of same size a and b. Store sum of a and b in c and display it*/
#include <stdio.h>
#define row 10
#define col 10
int main()
{
    int a[row][col], b[row][col], Sum[row][col], i, j, r, c;
    printf("Enter the size of row\n");
    scanf("%d", &r);
    printf("Enter the size of col\n");
    scanf("%d", &c);
    // input first matrix//
    printf("Enter the first matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    // input second matrix//
    printf("Enter the second matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[row][col]);
        }
    }
    // calculate sum//
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            Sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // print c//
    printf("The sum of matrix is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  \t", Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}