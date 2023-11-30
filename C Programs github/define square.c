#include<stdio.h>
#define sq(x) x*x
int main()
{
	int a=5;
	printf("%d",sq(a++));
	return 0;
}