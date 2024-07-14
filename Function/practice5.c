//multiplication of two numbers
#include <stdio.h>
int mul(int a, int b)
{
    return a *b;
}
int main()
{
    int a, b, c;
    printf("enter the two digits\n");
    scanf("%d%d",&a,&b);
    c = mul(a, b);
    printf("the mul is %d\n ", c);
    return 0;
}