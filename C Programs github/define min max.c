#include<stdio.h>
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
int main()
{
	int x=7,y=5;
	printf("%d\n",max(x,y)+1);
	printf("%d",min(x,y)+1);
}