//WAP to enter array and display using function//
#include<stdio.h>
int display(int a[],int n)
{
    int i;
    printf("the element of array\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
int main()
{
int a[100],n,i;
printf(" enter the size\n");
scanf("%d",&n);
printf("type the %d number\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
display (a,n);
}
