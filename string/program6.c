// to count no of words

#include<stdio.h>

int main()
{
    char a[100];
    int i=0,word=1;
    printf("enter the word\n");
     gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
    word++;
        }
    }
    printf("number of words is %d\n",word);
    return 0;
}

/* or using while also we do,
while(a[i]!='\0')
    {
        if(a[i]==' ')
        word++;
        i++;
    }
    
// to fine number of letter in the string

   #include<stdio.h>

int main()
{
    char a[100];
    int i=0,word=1;
    printf("enter the word\n");
     gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    word++;
    }
    printf("number of words is %d\n",word);
    return 0;
}
*/