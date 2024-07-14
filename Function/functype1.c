//no argument no return type
#include<stdio.h>

void sum()
{
    sum();
}
void main()
{
    int a=2,b=3,sum;
    sum=a+b;
    printf("sum=%d",sum);
}

