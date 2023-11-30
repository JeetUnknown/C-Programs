//HCF and LCM of two numbers
#include<stdio.h>
int main()
{
int a,b,r,a1,b1,hcf,lcm;
printf("Enter two numbers :");
scanf("%d %d",&a,&b);
a1=a;
b1=b;
while(b%a!=0)
{
r=b%a;
b=a;
a=r;	
}
hcf=a;
lcm=(a1*b1)/hcf;
printf("HCF is %d and LCM is %d",hcf,lcm);	
}
