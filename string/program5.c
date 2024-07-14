//concating two string withput using library function

#include<stdio.h>
int main()
{
    char str1[50],str2[50],str3[100],i=0,j=0;
    printf("enter first string\n");
    scanf("%s",str1);
    printf("enter second string\n");
    scanf("%s",str2);
 while(str1[i]!='\0')
 {
    str3[i]=str1[i];
    i++;
 }
 while(str2[i]!='\0')
 {
    str3[i]=str2[j];
    i++;
    j++;
 }
 str3[i]='\0';
 printf("concat is %s\n",str3);
}