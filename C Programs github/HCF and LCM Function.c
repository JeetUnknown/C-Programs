#include<stdio.h>
int hcf(int a,int b)
{
	int r;
	while (b%a!=0)	
	{
		r=b%a;
		b=a;
		a=r;
	}
	return a;
}
int main()
{
	int x,y,x1,y1,HCF,LCM;
	printf("Enter a numer :");
	scanf("%d",&x);
	printf("Enter another numer :");
	scanf("%d",&y);
	x1=x;
	y1=y;
	HCF=hcf(x,y);
	LCM=(x1*y1)/HCF;
	printf("HCF is :%d\n",HCF);
	printf("LCM is :%d\n",LCM);
	return 0;
}