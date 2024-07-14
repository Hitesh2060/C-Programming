//function with return and no aurgument
#include<stdio.h>
int sum();
int main()
{
    int s;
    s=sum();
    printf("sum is %d",s);
    return 0;
}
int sum()
{
    int a,b,s;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    s=a+b;
    return s;
}