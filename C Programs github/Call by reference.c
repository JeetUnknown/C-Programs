#include<stdio.h>
int add(int *p,int *q)
{
	int res;
	res =*p+*q;
	//*p=100;
	//*q=200;
	return res;
}
int main()
{
	int a=10,b=20,c;
	c=add(&a,&b);
	printf("%d\n",c);
	printf("a=%d\nb=%d",a,b);
}