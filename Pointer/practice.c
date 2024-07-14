#include<stdio.h>

int main()
{
    int a=15;
    int *ptra= &a;
    int *ptr2=NULL;
    printf("the address of pointer to a is %p\n",&ptra); //address of pointer
    printf("the adress of a is %p\n",&a); //address of a
    printf("the adress of a is %p\n",ptra); //address of a
    printf("the adress of some garbage is %p\n",ptr2); //NULL VALUE 0000
    printf("the value of a is %d\n",*ptra); //15
    printf("the value of a is %d\n",a);  //15
    
    return 0;
}