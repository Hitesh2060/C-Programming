#include<stdio.h>

int main()
{
    int i,j,n=5,N=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",N);
          N=N+1;  
        }
        printf("\n");
    }
    return 0;
}

/*   output
             1
             2 3
             4 5 6
             7 8 9 10
             11 12 14 15   */