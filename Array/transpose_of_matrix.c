/*WAP to input matrix and display the transpose of matrix*/
#include<stdio.h>

int main()
{
    int a[2][2],transpose[2][2],r,c,i,j;
    printf("Enter the rows and column\n" );
    scanf("%d%d",&r,&c);
    printf("Enter the matrix\n");
    for(i=0;i<r;i++)        //input matix
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is\n");
   for(i=0;i<r;i++)      //printing matrix
   {
    for(j=0;j<c;j++)
    {
        printf("%d\t ",a[i][j]);
    }
    printf("\n");
   }
   for(i=0;i<r;i++)            //calculate transpose of matrix
   {
    for(j=0;j<c;j++)
    {
        transpose[j][i]= a[i][j];
    }
   }
   printf("The transpose is \n");
   for(i=0;i<r;i++)           // printing transpose
   {
    for(j=0;j<c;j++)
    {
        printf("%d\t", transpose[i][j]);
    }
    printf("\n");
   }
    return 0;
}