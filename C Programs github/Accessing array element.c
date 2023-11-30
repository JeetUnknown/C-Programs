#include<stdio.h>
int main()
{
	int a[3]={5,6,7};
	int *p;
	p=a;
	//Method 1
	for(int i=0;i<3;i++)
	{
		printf("%d	",p[i]);
	}
	printf("\n\n");
	//Method 2
	for(int i=0;i<3;i++)
	{
		printf("%d	",*(p+i));
	}
	printf("\n\n");
	//Method 3
	for(int i=0;i<3;i++)
	{
		printf("%d	",*p);
		p++;
	}
	return 0;
}