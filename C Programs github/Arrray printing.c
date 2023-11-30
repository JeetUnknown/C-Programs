#include<stdio.h>
int main()
{
	int i;
	int a[5]={5,6,7,8,9};
	char b[]="Hello";
	for (i=0;i<=4;i++)
	{
		printf("%d	",a[i]);
	}
	printf("\n\n");
	for (i=0;i<=4;i++)
	{
		printf("%c	",b[i]);
	}
	return 0;
}