//Magic Square Generation
#include<stdio.h>
int main()
{
	int M[100][100];
	int n,row,col;
	printf("Enter no of rows or columns :");
	scanf("%d",&n);
	if(n%2!=0)
	{
    for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			M[row][col]=0;
		}
	}
	row=0;
	col=n/2;
	M[row][col]=1;
	int c=1;
	while(c<=n*n)
	{
		c++;
		row--;
		col++;
		if(row<0 && (col>=0 && col<n))
		row=n-1;
        else if(col>n-1 && (row>=0 && row<n))
        col=0;
        else if((row<0 && col>n-1) || M[row][col]!=0)
       {
		row=row+2;
        col --;
       }
        M[row][col]=c;
	}
	for(row=0;row<n;row++)
	{
		printf("\n");
		for(col=0;col<n;col++)
		{
			printf("%d	",M[row][col]);
		}
	}
}
}
