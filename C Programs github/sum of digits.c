//Find sum of digits of a number
#include<stdio.h>
int main()
{
int n,d,s;
s=0;
printf("Enter a number :");
scanf("%d",&n);
while(n!=0)
{
d=n%10;
s=s+d;
n=n/10;	
}
printf("Sum of the digits is %d",s);
}

//Output:Sum of the digits of the user given number is printed