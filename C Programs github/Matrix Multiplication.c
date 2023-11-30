//Matrix Multiplication
#include<stdio.h>
int main()
{
int a[100][100],b[100][100],c[100][100];
int m,n,n1,k,p,row,col;
printf("Enter number of rows of 1st matrix:");
scanf("%d",&m);
printf("Enter number of columns of 1st matrix :");
scanf("%d",&n);
printf("Enter number of rows of 2nd matrix:");
scanf("%d",&n1);
printf("Enter number of columns of 2nd matrix :");
scanf("%d",&p);

for(row=0;row<m;row++)
{
    printf("Enter elements for 1st matrix row %d --->",row+1);
    for(col=0;col<n;col++)
    {
        scanf("%d",&a[row][col]);
    }
}
for(row=0;row<n1;row++)
{
    printf("Enter elements for 2st matrix row %d --->",row+1);
    for(col=0;col<p;col++)
    {
        scanf("%d",&b[row][col]);
    }
}
if(n=n1)
{
  for(row=0;row<m;row++)
{
    for(col=0;col<p;col++) 
    {
    c[row][col]=0;
    for(k=0;k<n;k++)
    {
    c[row][col]=c[row][col]+a[row][k]*b[k][col];
    }
    }
}
for(row=0;row<m;row++)
{
    for(col=0;col<p;col++) 
    {
        printf("%d",c[row][col]);
    }
    printf("\n");
}
}
else    
printf("Multiplication not possible");
}
//Output : New matrix is printed as the result of multiplication of the  user given two matrixes
