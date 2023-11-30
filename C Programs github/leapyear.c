//Test whether a year is leap year or not
#include<stdio.h>
int main()
{
int year;
printf("Enter a year :");
scanf("%d",&year);
if(year%100==0)
{
	if (year%400==0)
	printf("Leap year");
	else
	printf("Not Leap year");
}
else if(year%4==0)	
printf("Leap year");
else
printf("Not Leap year");
}

//Output : leap year is printed if the user given year is a leap year