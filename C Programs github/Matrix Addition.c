//Matrix Addition
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100];
    int m,n,i,j,row,col;
    printf("Enter number of rows of a matrix :");
    scanf("%d",&m);
    printf("Enter number of columns of a matrix :");
    scanf("%d",&n);
    for(row=0;row<m;row++)
    {
    printf("Enter elements of 1st matrix for row %d -->",row+1);
    for(col=0;col<n;col++)
    {
     scanf("%d",&a[row][col]);
    }
    }
    for(row=0;row<m;row++)
    {
    printf("Enter elements of 2nd matrix for row %d -->",row+1);
    for(col=0;col<n;col++)
    {
     scanf("%d",&b[row][col]);
    }
    }
    for(row=0;row<m;row++)
    {
    for(col=0;col<n;col++)
    {
    c[row][col]=a[row][col]+b[row][col];
    printf("%d  ",c[row][col]);
    }
    printf("\n");
    }
    }
//Output:New matrix is printed as addition of the user given two matrixes