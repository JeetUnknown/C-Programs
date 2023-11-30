#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter string 1 -->");
    gets(s1);
    printf("Enter string 2 -->");
    gets(s2);
    if(strcmp(s1,s2)>0)
    printf("%s is greater",s1);
    else if(strcmp(s1,s2)<0)
    printf("%s is greater",s2);
    else
    printf("Equal");
}