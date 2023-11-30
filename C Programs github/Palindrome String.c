#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	int x,y;
	int flag=0;
	printf("Enter a string :");
	gets(name);
	x=0;
	y=strlen(name)-1;
	while(x<=y)
	{
		if (name[x]!=name[y])
		{
		flag=1;
		break;
	    }
	    x++;
	    y--;
	}
	if(flag==0)
	printf("String is Palindrome");
	else
	printf("String is not Palindrome");
}