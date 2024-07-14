// wap using structure to pointer
#include <stdio.h>
struct student
{
    char name[20];
    int age;
};

int main()
{
    struct student s1,*p;;
    p = &s1;
    printf("enter the data of student\n");
    printf("enter the name\n");
    scanf("%s", &s1.name);
    printf("enter the age\n");
    scanf("%d", &s1.age);
    printf("\nname=%s\t age=%d",p->name,p->age);
    return 0;
}