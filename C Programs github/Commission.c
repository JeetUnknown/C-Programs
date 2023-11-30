/*
Algorithm to calculate the commission of a salesman when sales and the region of the sales 
are given as input. The commission is calculated with the rules as follows:
(a) No commission, if sales < $9,000 in Region A
(b) 5.5% of sales < $7,000 in Region B and when sales < $13,000 in Region A
(c) 7.5% of sales when sales > = $14,000 in Region A and when sales > = $13,000 in Region B
*/
#include<stdio.h>
int main()
{
	int sales_A,sales_B,commission_A=0,commission_B=0;
	printf("Enter amount of sales in region A:$");
	scanf("%d",&sales_A);
	//region A
	if(sales_A<9000)
	{
	    printf("No commission in region A\n");
    }
	else if(sales_A<13000 && sales_A>=9000)
	{
		commission_A = 5.5*sales_A/100;
		printf("Commission in region A is $%d\n",commission_A);
	}
	else if(sales_A>=14000)
	{
		commission_A = 7.5*sales_A/100;
		printf("Commission in regio A is $%d\n",commission_A);
	}
	
	//region B
	printf("Enter amount of sales in region B:$");
	scanf("%d",&sales_B);
    if(sales_B<7000)
	{
		commission_B = 5.5*sales_B/100;
		printf("Commission in region B is $%d\n",commission_B);
	}
	else if(sales_B>=13000)
	{
		commission_B = 7.5*sales_B/100;
		printf("Commission in region B is $%d\n",commission_B);
	}
	printf("Net commission is $%d",commission_A+commission_B);
    return 0;
}
