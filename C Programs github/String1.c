#include<stdio.h>
int main()
{
   char name[100];
   printf("Enter a name :");
   gets(name);
   puts(name);
   name[3]='\0';
   puts(name);
}