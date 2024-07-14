//sum of function having parameter and return type
#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a, b, c;
    a = 15;
    b = 20;
    c = sum(a, b);
    printf("the sum is %d\n",c);
    return 0;
}
