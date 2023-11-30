//Largest out of three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers :");
	scanf("%d %d %d",&a,&b,&c);
	   if(a>b && a>c)
	printf("Largest number is %d",a);
	   else if(b>a && b>c)
	printf("Largest number is %d",b);
       else if(c>a && c>b)
	printf("Largest number is %d",c);
}


//output : largest number from the user's input in printed