//create the file and add some text
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("D//:test.txt","w");
    if(fptr==NULL)
    {
        printf("file caanot created");
        exit(0);
    }
    fputs("welcome to my collage",fptr);
    return 0;
}