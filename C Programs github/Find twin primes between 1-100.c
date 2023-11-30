//Twin primes between 1 to 100
#include<stdio.h>
int main()
{
	int p1,p2,i,j;
	printf("Twin prime numbers between 1-100:\n");
	for(i=1;i<=100;i++)
	{
		p1=0;
		p2=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			p1++;
		}
		for(j=1;j<=i+2;j++)
		{
			if((i+2)%j==0)
			p2++;
		}
		if(p1==2&&p2==2)
		printf("%d,%d	",i,i+2);
	}
}
