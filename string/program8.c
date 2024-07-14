#include<stdio.h>
int main()
{
    char name[]= "Hari Prasad sharma";
    int i=0;
    printf("entered name is\n");
    while(name[i]!='\0');
    printf("%c\t",name[i]);
    i++;
    return 0;
}