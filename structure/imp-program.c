#include<stdio.h>
    int main()
    {
    struct employee
    {
        char name[20];
        int age;
        float salary;
    }emp;

    FILE *fptr;
    printf("enter the record\n");
    scanf("%s",&emp.name);
    scanf("%d",&emp.age);
    scanf("%f",&emp.salary);

    fptr=fopen("D://employee.dot","wb");
   /* if(fptr==NULL)
    {
        printf("error");
        exit(0);
    }*/

    fwrite(&emp,sizeof(emp),1,fptr);
    fclose(fptr);

    return 0;
}