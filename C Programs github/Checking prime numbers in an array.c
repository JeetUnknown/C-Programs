//Checking prime numbers in an array of 10 numbers 
#include<stdio.h>
int main()
{
int i,n,d,count;
int a[100];
printf("enter elements:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
n=a[i];
count=0;
for(d=1;d<=n;d++)
{
if(n%d==0)
count++;
}
if(count==2)
printf("%d	",n);
}
}
