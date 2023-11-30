//Find day of week of a date in 2023 taking 1st January 2023 as reference date
#include<stdio.h>
int main()
{
	int d,m,diff;
	diff=0;
	printf("Enter a date in dd/mm format :");
	scanf("%d/%d",&d,&m);
	
	switch(m-1)
	{
	case 11:diff=diff+30;   //November
	case 10:diff=diff+31;   //October
	case 9:diff=diff+30;   //Septemmber
	case 8:diff=diff+31;   //August
	case 7:diff=diff+31;   //July
	case 6:diff=diff+30;   //June
	case 5:diff=diff+31;   //May
	case 4:diff=diff+30;   //April
	case 3:diff=diff+31;   //March
	case 2:diff=diff+28;   //February
	case 1:diff=diff+31;   //January
	}
	diff=diff+d-1;
	
	switch(diff%7)
	{
	case 0: printf("Sunday");    break;
	case 1: printf("Monday");    break;
	case 2: printf("Tuesday");   break;
	case 3: printf("Wednesday"); break;
	case 4: printf("Thursday");  break;
	case 5: printf("Friday");    break;
	case 6: printf("Saturday");  break;
	}
}

//Output: Day of the week is printed depending on the user given date