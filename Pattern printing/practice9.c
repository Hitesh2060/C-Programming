#include<stdio.h>

int main()
{
    int i,j,n=4,k=4;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf("\t");
        }
        for(j=1;j<=2*k-1;j++)
        {
            printf("*\t");
        }
        k--;
        printf("\n");
    }
    return 0;
}