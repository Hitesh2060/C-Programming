//functon with aurgument and return type
#include<stdio.h>
int sum(int, int);

int main()
{
    int a,b,s;
    printf("enter the number\n");
    scanf("%d %d",&a,&b); 
    s=sum(a,b);
    printf("the sum is %d",s);
    return 0;
}
int sum(int a,int b)
{
    int s;
    s=a+b;
    return sum;
}