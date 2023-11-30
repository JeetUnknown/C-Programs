//Transpose of Matrix 
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100];
    int m,n,i,j,row,col;
    printf("Enter number of rows :");
    scanf("%d",&m);
    printf("Enter number of columns :");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
    printf("Enter elements for row %d -->",i+1);
    for(j=0;j<n;j++)
    {
     scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
    b[i][j]=a[j][i];
    printf("%d  ",b[i][j]);
    }
    printf("\n");
    }
    }
//Output: Transpose of the user given matrix is printed 
