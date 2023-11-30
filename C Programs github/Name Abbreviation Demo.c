#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    int x,y,k;
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);  // Use fgets to read a line with spaces
    y=strlen(name)-1;
    while(y>=0 && name[y]!=' ')
    {
        y--;
    }
    x=0;
    while(x<y)
    {
        while(name[x]==' ')
        {
            x++;
        }
        printf("%c.",name[x]);
        while(name[x]!=' ' && name[x]!='\0')
        {
            x++;
        }
    }
    for(k=y+1;name[k]!='\0';k++)
    {
        printf("%c",name[k]);
    }
    
    return 0;
}
