//Factors of a number
#include<stdio.h>
int main()
{
	int d,n;
	printf("Enter a number :");
	scanf("%d",&n);
while(n!=1)
{
for(d=2;d<=n;d++)
{
	if(n%d==0)
	{
	printf("%d	",d);
	n=n/d;
    }
    else
	{
   	d=d+1;	
	}
}
}
}
//Output : Factors of the user given number is printed
