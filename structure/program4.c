/*create a structure name employee having members name, age, and salary.
 use this structure to read the name, age, and salary of employee and write entered information
 to a file name "employee.dat" */
 #include<stdio.h>
 int main()
 {
    struct employee
    {
        char name[20];
        int age;
        float sal;
    };
    struct employee emp;
    FILE *fp;
    printf("enter the record of employee\n");
    scanf("%s",&emp.name);
    scanf("%d",&emp.age);
    scanf("%f",&emp.sal);

    fp=fopen("D://empoyee.dat","wb");
    if(fp==NULL)
    {
        printf("error\n");
        exit(0);
    }
    fwrite(&emp,sizeof(emp),1,fp);
    fclose(fp);

 }
