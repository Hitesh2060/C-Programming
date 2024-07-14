//using strncat

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Hitesh",str2[]="Bhattaa";
    strncat(str1,str2,5);
    printf("the name is %s\n",str1);
    return 0;
}