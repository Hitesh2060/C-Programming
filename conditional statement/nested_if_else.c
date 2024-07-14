#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the numbers a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>c)
    {
        if(a>b)
        printf("a is greatest");
        else
        printf("b is grestest");
    }
    else
    {
        if(c>b)
        printf("c is greatest");
        else
        printf("b is greatest");
    }
    return 0;
}