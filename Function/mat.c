#include<stdio.h>
//function call
void addmat(int a[][10],int b[][10],int r,int c) 

{
    int s[10][10],i,j;
     for(i=0;i<r;i++)
{
    for(j=0;j<=c;j++)
    {
        s[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("%d\t",s[i][j]);
}
printf("\n");

}
int main ()
{
int a[10][10],b[10][10],s[10][10];
    int i,j,r,c;
    printf("enter the size of matrices\n");
    scanf("%d%d",&r,&c);

    // read first matrix
    printf("enter the elements of first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // read second matrix
    printf("enter the element of second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //function call
addmat(a,b,r,c);
return 0;
}


