// sum of n natural number using recursion function//
#include<stdio.h>

int sumofN(int n)
{
    if(n==0)
    return 0;
    else
    return n+sumofN(n-1);
}
int main()
{
    int n,sum;
    printf("enter the numbers\n");
    scanf("%d",&n);
    sum=sumofN(n);
    printf("sum is %d",sum);
    return 0;
}
