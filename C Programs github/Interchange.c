//Interchange two nubers
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After interchange first number is %d and second number is %d",a,b);
}

//Output : The user given numbers are interchanged and then printed
