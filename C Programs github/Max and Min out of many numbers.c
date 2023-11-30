#include<stdio.h>
int main()
{
	int a[100],n,max,min,i;
	printf("Enter no of elements :");
	scanf("%d",&n);
	printf("Enter numbers :");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	
    for(i=0;i<n;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
	}
	}
	printf("Maximum is %d\n",max);
    for(i=0;i<n;i++)
    {
    if(a[i]<min)
	{
		min=a[i];
	}
	}
		printf("Minimum is %d",min);
}
