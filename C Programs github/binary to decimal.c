//Binary to Decimal 
#include<stdio.h>
int main()
{
int dec=0,bin,d,m=1;
printf("Enter a binary value :");
scanf("%d",&bin);
while(bin!=0)
{
d=bin%10;
dec=dec+d*m;
m=m*2;	
bin=bin/10;
}
printf("Equvalent Decimal value is %d",dec);
}

//Output:Decimal equivalent of the user given binary value is printed