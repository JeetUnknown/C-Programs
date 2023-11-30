//Checking if a matrix is symmetric or not
#include<stdio.h>
int main()
{
    int a[100][100],row,col,n,flag;
    printf("Enter no of rows or columns :");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
    printf("Enter elements of 1st matrix for row %d -->",row+1);
    for(col=0;col<n;col++)
    {
     scanf("%d",&a[row][col]);
    }
    }
    flag=0;
    for(row=0;row<=n-2;row++)
    {
    for(col=0;col<=n-1;col++)
    {
    if(a[row][col]!=a[col][row])
    {
       flag=1;
       break;
    }
    }
    }
    if(flag==1)
    printf("Not Symmetric");
    else if(flag==0)
    printf("Symmetric");
}
//Output: Symmetric or Not Symmetric is prined depending on the user given matrix 