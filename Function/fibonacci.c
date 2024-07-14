//WAP to find nth fibonacci series using recursion//
#include<stdio.h>
int fibo(int n)
{
    if(n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int f,n;
    printf("enter the number\n");
    scanf("%d",&n);
    f=fibo(n);
    printf("%dth fibonacci number is %d",n,f);
    return 0;
}