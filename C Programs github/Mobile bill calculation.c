//Mobile bill calculation
#include<stdio.h>
 int main()
{
    int unit;
    float bill;
    printf("Enter unit: ");
    scanf("%d",&unit);
    if(unit<=200)
              bill=0.0;    
    else if(unit<=300)
    	bill=5*(unit-200);
    else if(unit<=400)
              bill=10000+6*(unit-300);
    else if(unit<=500)
    	bill=28000+7*(unit-400);
    else
              bill=56000+10*(unit-500);
    printf("Bill: %0.2f",bill);
}


