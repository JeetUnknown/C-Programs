#include<stdio.h>
//Call by value
void swap(int x,int y)
{
	int t;
	printf("Before swap a=%d,b=%d\n",x,y);
	t=x;
	x=y;
	y=t;
	printf("After swap  a=%d,b=%d\n",x,y);
}
int main()
{
	int a=10,b=20;
	swap(a,b);
}
//Call by reference
void swapr(int *p,int *q)
{
	int t;
	printf("Before swap a=%d,b=%d\n",*p,*q);
	t=*p;
	*p=*q;
	*q=t;
	printf("After swap  a=%d,b=%d",*p,*q);
}
int main()
{
	int a=10,b=20;
	swapr(&a,&b);
}









