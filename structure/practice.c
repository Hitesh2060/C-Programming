#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr=fopen("D://myfile.txt","w");
    fprintf(ptr,"my name is hitesh");
    fclose(ptr);
    return 0;
}