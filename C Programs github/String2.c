#include<stdio.h>
int main()
{
	char name[10];
	printf("Enter a name :");
	gets(name);
	puts(name);
	name[4]='\0';
	puts(name);
}