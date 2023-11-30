//Electric bill calculation case study
#include<stdio.h>
int main()
{
	float unit,f,charge;
	printf("enter total power consumed in KWH :");
	scanf("%f",&unit);
	printf("enter connected load in KVA :");
	scanf("%f",&f);
	if(unit<=102)
	charge=5.04*unit;
	else if(unit<=180)
	charge=514.08+6.33*(unit-102);
	else if(unit<=300)
	charge=1007.82+7.12*(unit-180);
	else if(unit<=600)
	charge=1862.22+7.52*(unit-300);
	else
	charge=4118.22+7.69*(unit-400);
	printf("total fixed charges amount=Rs %0.2f",f*30);
	printf("\ntotal bill amount=Rs %0.2f",charge);
}
