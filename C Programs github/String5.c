#include<string.h>
#include<stdio.h>
int main()
{
	int l;
	char name[100];
	printf("Enter a name :");
	gets(name);
	l=strlen(name);
	printf("String Length is %d",l);
}