#include<stdio.h>
int multiply(int x,int y)
{
	return x*y;
}
int main()
{
	int a,b,c;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Enter another number :");
	scanf("%d",&b);
	c=multiply(a,b);
	printf("Result of Multiplication is %d",c);
}