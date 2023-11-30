#include<stdio.h>
#include<math.h>
int main()
{
	int x=2,n,i,sum=0;
	printf("Enter the power of the last term :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+pow(-1,i)*pow(x,i);
	}
	printf("sum is :%d",sum);
	return 0;
}