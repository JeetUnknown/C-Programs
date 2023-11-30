#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="Kamal";
	int l;
	{
	int l=strlen("Hello");
	printf("String length for Hello is %d\n",l);
    }
	l=strlen(name);
	printf("String length for name is %d",l);
}