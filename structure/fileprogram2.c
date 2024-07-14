//open created program and read some text from that file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char str;
    fptr=fopen("D://test.txt","r");
    if(fptr==0)
    {
        printf("file cannot created");
        exit(0);
    }
    fgets(str,10,fptr);
    printf("the data from file is %s",str);
    fclose(fptr);
    return 0;
}

