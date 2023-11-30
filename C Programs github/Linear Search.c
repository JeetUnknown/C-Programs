//Linear Search
#include<stdio.h>
int main()
{
int a[100];
int n,m,key,i,flag;
printf("Enter number of elements in list :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element--->");
scanf("%d",&a[i]);
}
printf("Enter the value to search :");
scanf("%d",&key);
flag=0;
for(i=0;i<n;i++)
{
if(key==a[i])
{
flag=1;
m=i;
}
}
if(flag==1)
printf("\nFound at position %d",m+1);
else
printf("\nNot Found");
}