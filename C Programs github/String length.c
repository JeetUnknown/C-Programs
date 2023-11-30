#include<stdio.h>
int main()
{
    char name[100];
    int l=0;
    int i=0;
    printf("Enter a string :");
    gets(name);
    while(name[i]!='\0')
    {
        l++;
        i++;
    }
    printf("String length is %d",l);

}