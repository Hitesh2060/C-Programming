#include <stdio.h>
int main()
{
    int a[2][2], i, j, r, c;
    printf("Enter the rows and column\n");
    scanf("%d%d", &r, &c);
    printf("Enter the element of matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++);

        scanf("%d", &a[i][j]);
    }
       printf("the matrix is \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d", a[i][j]);
    }
    printf("\n");
    return 0;
}
/*#include<stdio.h>
int main()
{
int a[2][2], r, c, i, j;
printf("Enter the rows and column\n");
scanf("%d%d", &r, &c);
printf("Enter the matrix\n");
for (i = 0; i < r; i++) // input matix
{
    for (j = 0; j < c; j++)
    {
        scanf("%d", &a[i][j]);
    }
}
printf("The matrix is\n");
for (i = 0; i < r; i++) // printing matrix
{
    for (j = 0; j < c; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
return 0;
}*/