//area of rectangle
#include<stdio.h>
int areaofrect(int l,int b)
{
    int a;
    a=l*b;
    return a;
}
int main()
{
    int a,l,b;
    printf("enter the l and b of reacangle\n");
    scanf("%d%d",&l,&b);
    a=areaofrect(l,b);
    printf("area is %d\n",a);
    return 0;
}