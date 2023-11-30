//Saddle Points
#include<stdio.h>

int main()
{
int a[100][100],i,k,m,n,row,col,min,max;
printf("Enter number of rows :");
scanf("%d",&m);
printf("Enter number of columns :");
scanf("%d",&n);
for(row=0;row<m;row++)
{
printf("Enter elements for row %d ---> ",row+1);		
for(col=0;col<n;col++)
{
scanf("%d",&a[row][col]);
}
}
for(row=0;row<m;row++)
{
for(col=0;col<n;col++)
{
min=a[row][0];
for(k=0;k<n;k++)
{
if(a[row][k]<min)
min=a[row][k];
}
max=a[0][col];
for(k=0;k<m;k++)
{
if(a[k][col]>max)
max=a[k][col];
}
if(max==a[row][col]&&min==a[row][col])
{
printf("\nIndex of the saddle point is(%d,%d) and the element is %d",row,col,a[row][col]);
}
}
}
}
//Output :Index and the element is printed if  saddle point is found
