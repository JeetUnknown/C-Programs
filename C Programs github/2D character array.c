#include<stdio.h>
int main()
{
	char name[100][300];
	int n;
	printf("Enter number of inputs :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter string %d-->",i+1);
		scanf("%s",name[i]);
	}
	for(int i=0;i<n;i++)
	{
		puts(name[i]);
	}
}
