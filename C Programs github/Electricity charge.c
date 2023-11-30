/*
Write an algorithm for the following problem
an electricity board charges the following rates to domestic users to discourage large 
consumption of energy:
for the first 100 units—$.85 per unit 
for the next 200 units—$1.45 per unit 
Beyond 300 units—$1.85 per unit
All users are charged a minimum of $ 500.00. If the total cost is more than $ 2,500.00, then an 
additional surcharge of 3% of the total cost is added to the total cost to determine the final 
bill.
*/
#include<stdio.h>
int main()
{
	int units,charge;
	printf("Enter amount of units consumed :");
	scanf("%d",&units);
	if(units<=100)
	{
		charge=(units*0.85);	
	}
	else if(units<=300)
	{
		charge=(units-100)*1.45+85;
	}
	else if(units>300)
	{
		charge=(units-300)*1.85+85+290;
	}
	if(charge<=500)
	{
		printf("Net charge is $%d",500);	
	}
	else if(charge>2500)
	{
		printf("Net charge is $%d",charge+(0.03*charge));
	}
	else
	{
		printf("Net charge is $%d",charge);	
	}
	return 0;
	}