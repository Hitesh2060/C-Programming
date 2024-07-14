//passing structure to function
#include<stdio.h>
struct student
{
    char name[20];
    int id;
    int marks;
};
struct student s1;
 //function prototype
    void print( struct student s1);

int main()
{   
    printf("enter the name\n");
    scanf("%s",&s1.name);
    printf("enter the id\n");
    scanf("%d",&s1.id);
    printf("enter the marks\n");
    scanf("%d",&s1.marks);
    print(s1);
    return 0;
}
//function definition
void print(struct student x);
{
    printf("\n name:%s\t id:%d\t marks:%d\t",x.name,x.id,x.marks);
    
}