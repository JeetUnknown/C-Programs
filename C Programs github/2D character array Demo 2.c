#include<stdio.h>
int main()
{
    char name[100][100];
    int i,n;
    printf("Enter number of strings :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter string %d :",i+1);
        scanf("%s",name[i]);
    }
    printf("The strings you entered are:\n");
    for(i=0;i<n;i++)
    {
        puts(name[i]);
    }
}