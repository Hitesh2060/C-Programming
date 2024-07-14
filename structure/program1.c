// WAP to store and display students records also calculate marks of five subjects
#include<stdio.h>
 struct student
{
char name[20];
int roll;
float marks[5];
} s;
int main()
{
    int i;
    float total,avg;
    printf("enter the name\n");
    scanf("%s",&s.name);
    printf("enter the roll\n");
    scanf("%d",&s.roll);
    printf("enter the 5 subject marks\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
        total=total+s.marks[i];
        avg=total/5;
    }
    printf("name is %s\n",s.name);
     printf("roll is %d\n",s.roll);
    printf("the total =%f\n and avg=%f\n",total,avg);
    
    return 0;
}