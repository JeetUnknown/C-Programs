#include<stdio.h>
int main()
{
	int a=500,b=100,t;
	int *p,*q;
	p=&a;
	q=&b;
	t=*p;
	*p=*q;
	*q=t;
	printf("%d\n%d",a,b);
	return 0;
}