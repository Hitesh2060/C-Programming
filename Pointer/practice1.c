#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float sum=0,avg,*p;
    printf("enter the number of students\n");
    scanf("%d",&n);
    p=(float*)malloc(n*sizeof(float));
    printf("enter the marks\n");
    {
    for(i=0;i<n;i++)
    scanf("%f\n",p+1);
    }
    //display entered number
     for(i=0;i<n;i++)
    {
        printf("%f",*(p+1));
    }
    //calculate sum
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    avg=sum/n;
    printf("sum=%f\n average=%f\n",sum,avg);
    return 0;
}