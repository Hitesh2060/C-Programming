//passing structure to function
#include<stdio.h>
struct student    //creating structure
{
    char name[20];
    int roll;
    char section;
};
//function decleration
void dispalydetail(struct student std);
int main(void)
{
    struct students std[2];
    int i;
    //taking input
    for(i=0;i<2;i++)
    {
        printf("enter the detail of students\n",(i+1));
        printf("enter the name\n");
        scanf("%s",std[i].name);
         printf("enter the roll\n");
        scanf("%d",std[i].roll);
         printf("enter the section\n");
        scanf("%s",std[i].section);
    }
    //taking output
    for(i=0;i<2;i++)
    {
        printf("student detail\n",(i+1));
        displaydetail(std[i]);
    }
    return 0;
}

void displaydetail(struct student std)
{
    printf("name\n",std.name);
    printf("roll\n",std.roll);
    printf("section\n",std.section);
}