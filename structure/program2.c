// WAP to read record of 10 employee and display
#include<stdio.h>
struct employee 
{
    char name[20];
    int id;
    float sal;
};
int main()
{
    int i;
    struct employee e[10];
    //read record
    for(i=0;i<10;i++)
    {
        printf("enter the name\n");
        scanf("%s",&e[i].name);
        printf("enter the roll no\n");
        scanf("%d",&e[i].id);
        printf("enter the sal\n");
        scanf("%f",&e[i].sal);
    }
//display record
    for(i=0;i<10;i++)
    {
        printf("%s\n",e[i].name);
         printf("%d\n",e[i].id);
         printf("%f\n",e[i].sal);
    }
    return 0;
}