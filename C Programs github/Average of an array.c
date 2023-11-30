//Calculating average of elements an 1D array
#include<stdio.h>
int main()
{
int a[100],i,n;
float avg,s=0;
printf("Enter number of elements :");
scanf("%d",&n);
printf("Enter numbers : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ 
 s=s+a[i];
}
avg=s/n;
printf("Average is %f",avg);
}
