//Largest element of each row and column in a matrix
#include<stdio.h>
int main()
{
 int a[100][100],max,row,col,i,j;
//matrix size input
 printf("Enter matrix size in mxn format:");
 scanf("%dx%d",&i,&j);
//input
 for(row=0; row<=i-1; row++)
 {
 printf("Enter row %d\n",row+1);
 printf("enter elements-->");
 for(col=0; col<=j-1; col++)
 {
 scanf("%d",&a[row][col]);
 }
 }
//Maximum in row>>
 for(row=0; row<=i-1; row++)
 {
 max=a[row][0];
 for(col=0; col<=j-1; col++)
 {
 if(max<a[row][col])
 max=a[row][col];
 }
 printf("Maximum no in row %d-->%d\n",row+1,max);
 }
//Maximum in column>> 
for(col=0; col<=j-1; col++)
 {
 max=a[0][col];
 for(row=0; row<=i-1; row++)
 {
 if(max<a[row][col])
 max=a[row][col];
 }
 printf("Maximum no in column %d-->%d\n",col+1,max);
 }
}
