#include<stdio.h>
int isprime(int n)
{
	int c=0,d;
	for(d=1;d<=n;d++)
	{
		if(n%d==0)
		{
			c++;
		}	
	}
	if(c==2)
	return 1;
	else
	return 0;
}
int main()
{
	int x;
	printf("Enter a number :");
	scanf("%d",&x);
	if(isprime(x)==1)
	printf("Prime");
	else
	printf("Not Prime");
}