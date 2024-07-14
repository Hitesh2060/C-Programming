//functon with aurgument but no return type
#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,s;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    return 0;
}
int sum(int a, int b)
{
    int s;
    s=a+b;
    printf("the sum is %d",s);
}