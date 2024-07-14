//pattern printing even number//
#include<stdio.h>

int main()
{
    int i,j,A=0;
    for(i=1;i<=5;i++)
    {
        A=A+2;
        for(j=1;j<=i;j++)
        {
            printf("%d\t",A);
        }
        printf("\n");
    }
    return 0;
}