#include<stdio.h>
#include<math.h>
int main()
{
	int binary,grey,i,b,b1,b2,l,s,r,n1,n2;
	printf("Enter a binary value :");
	scanf("%d",&binary);
	l=sizeof(binary);
	b1=binary;
	b2=b;
	s=0;
	for(i=1;i<=l;i++)
	{
		n1=(b1/pow(10,l-1));
		n2=(b2/pow(10,l-2));
		r=n1^n2;
		s=s+r*pow(10,l-1);
		l--;
		printf("step wise change :%d\n",s);	
	}
	s=s+(binary/pow(10,l-1))*pow(10,l-1);
	printf("Equivalent Grey code :%d",s);
}