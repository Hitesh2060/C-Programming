//usind nested structure
#include<stdio.h>
struct dob
{
int year;
int month;
int day;
};
struct student 
{
    int id;
    char name[20];
    float marks;
    struct dob d;
};
int main()
{
    int i;
    struct student s[10];
    for(i=0;i<10;i++)
    {
        printf("enter the id\n");
        scanf("%d",&s[i].id);
        printf("enter the name\n");
        scanf("%s",&s[i].name);
        printf("enter the marks\n");
        scanf("%f",&s[i].marks);
        printf("enter DOB\n");
        scanf("%d %d %d",&s->d.year,&s->d.month,&s->d.day);
    }

 for(i=0;i<10;i++)
 {
    printf("%d",s[i].id);
     printf("%s",s[i].name);
      printf("%f",s[i].marks);
      printf("%d %d %d",s->d.year,s->d.month,s->d.day);
 }   
 return 0;
}