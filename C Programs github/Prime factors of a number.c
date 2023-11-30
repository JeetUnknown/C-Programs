//Prime factors of a number
#include<stdio.h>
int main()
{
	int n,i,count,d;
    printf("Enter a number :");
	scanf("%d",&n);
    while(n!=1)
    {
    count=0;
    for(d=2;d<=n;d++)
    {
	if(n%d==0)
	{
	printf("\n%d",d);
	n=n/d;
    }
    for(i=2;i<+d;i++)
    {
	if(d%i==0)
	count++;
    }
    if(count==2)
    printf("%d",i);
    }
}
}
//Output : Prime factors of the user given numbers are printed
