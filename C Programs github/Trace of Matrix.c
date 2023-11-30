//Trace of Matrix 
#include<stdio.h>
int main()
{
    int a[100][100];
    int n,s=0,i,j,row,col;
    printf("Enter number of rows or columns:");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
    printf("Enter elements for row %d -->",row+1);
    for(col=0;col<n;col++)
    {
     scanf("%d",&a[row][col]);
    }
    }
    for(i=0;i<n;i++)
    {
    s=s+a[i][i];
    }
    printf("Trace %d",s);
}
//Trace of the user given matrix is printed 