//Decimal to Binary
#include<stdio.h>
int main()
{
int dec,bin=0,d,m=1;
printf("Enter a decimal value :");
scanf("%d",&dec);
while(dec!=0)
{
d=dec%2;
bin=bin+d*m;
m=m*10;	
dec=dec/2;
}
printf("Equvalent Binary value is %d",bin);
}

//Output:Binary equivalent of the user given decimal value is printed