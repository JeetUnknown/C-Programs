#include<stdio.h>
int main()
{
	int i,count=0,sum=0;
	for(i=1;i<=9;i++)
	{
		if(i%3==0)
		{
			sum = sum+(i*i);
		}
	}
	printf("sum is %d",sum);
}