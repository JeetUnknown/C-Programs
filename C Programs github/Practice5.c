#include<stdio.h>
int main()
{
int x;
printf("Enter a number :");
scanf("%d",&x);
printf("%d", x % 2 == 0); /*This calculates the modulus and compares it with zero
                            if it is zero then 1 is printed otherwise 0 is printed */
return 0;	
}