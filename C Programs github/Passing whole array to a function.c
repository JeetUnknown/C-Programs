#include<stdio.h>
void show(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
}
void xyz(int *p,int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		*(p+i)=0;
	}
}
int main()
{
	int a[3]={5,7,9};
	show(a,3);
	xyz(a,3);
	show(a,3);
}
