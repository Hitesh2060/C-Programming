#include<stdio.h>

int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");

    }
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=i;j++)
        {
          printf(" ");  
        }
        for(j=1;j<=i;j++)
        {
            printf("/n");
        }
    }
    return 0;
}
//wrong not working//