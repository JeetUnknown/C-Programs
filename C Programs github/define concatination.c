#include<stdio.h>
#define g(x,y) x##y
int main()
{
	int a12=5;
	printf("%d",g(a1,2));
	return 0;
}