#include<stdio.h>
//Structure formation
struct rational
{
	int num,denom;
};
//HCF calculation
int gcd(int a,int b)
{
	int r;
	while(b%a!=0)
	{
		r=b%a;
		b=a;
		a=r;
	}
	return a;
}
//How to add two rational numbers
struct rational add(struct rational x,struct rational y)
{
	struct rational z;
	int g;
	z.denom=x.denom * y.denom;
	z.num=x.denom*y.num + y.denom*x.num;
	g=gcd(z.num,z.denom);
	z.denom=z.denom/g;
	z.num=z.num/g;
	return z;
}
//int main()
int main()
{
	struct rational r1,r2,r3;
	printf("Enter 1st number :");
	scanf("%d/%d",&r1.num,&r1.denom);
	printf("Enter 2nd number :");
	scanf("%d/%d",&r2.num,&r2.denom);
	r3=add(r1,r2);
	printf("Result of Addition is = %d/%d",r3.num,r3.denom);
}