#include<stdio.h>
int add(int x,int y)
{
	int res;
	res=x+y;
	return res;
}
int main()
{
	int a=10,b=20,c;
	c=add(a,b);
	printf("%d\n",c);
	printf("a=%d\nb=%d",a,b);
}