// returning a pointer using function
// program to find sum by pointer function
#include <stdio.h>

int *sum(int *, int *);

    int main()
{
    int a, b;
    int *c;
    printf("enter the number\n");
    scanf("%d %d", &a, &b);
    c = sum(&a, &b);
    printf("thr sum is %d", *c);
    return 0;
}
int *sum(int *a ,int *b)
{
    int *c;
    *c = *a + *b;
    return c;
}