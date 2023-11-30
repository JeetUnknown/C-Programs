#include<stdio.h>
int main()
{
int arr[100];
int i,j, pass, temp,n;
printf("Enter the no of elements in the array :");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<=n-1;i++)
{
scanf("%d",&arr[i]);
}
printf("The array before sorting: ");
for(i=0;i<=n-1;i++)
{
printf("%d	",arr[i]);
}
for(pass=1;pass<=n-1;pass++)
{
for(j=0;j<=n-pass-1;j++)
{
if (arr[j]>arr[j+1])
 {
 temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;
}
}
}
printf("\nArray after sorting: ");
for(j=0;j<=n-1;j++)
{
printf("%4d",arr[j]);
}
}
