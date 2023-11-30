//Name Abbreviation
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    char str[100];
    int x,y,k;
    printf("Enter a full name :");
    gets(name);
    //strcpy(str," ");
    strcat(str,name);
    y=strlen(name)-1;
    while(name[y]!=' ')
    {
        y--;
    }
    x=0;
    while(x<y)
    {
        while(str[x]==' ')
        {
            x++;
        }
        printf("%c.",str[x]);
        while(str[x]!=' ')
        {
            x++;
        }
    }
    for(k=y+1;str[k]!='\0';k++)
    {
        printf("%c",str[k]);
    }
    
    return 0;
}