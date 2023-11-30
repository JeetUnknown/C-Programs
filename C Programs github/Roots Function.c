#include<stdio.h>
#include<math.h>
void root(float a,float b,float c)
{
	float d = b*b - 4*a*c;
	float r1,r2;
	if(d<0)
	{
		printf("Imaginary Roots");
	}
	else
	{
		r1=((-1)*b+sqrt(d))/2*a;
		r2=((-1)*b-sqrt(d))/2*a;
		printf("Root1 :%g\nRoot2 :%g",r1,r2);
	}
	return;
}
int main()
{
	float a,b,c;
	printf("Enter three coefficients of a quadratic equation :\n");
	scanf("%f %f %f",&a,&b,&c);
	root(a,b,c);
}