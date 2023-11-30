//Merging two sorted arrays
#include<stdio.h>
int main() 
{
    int a[100],b[100],c[200];
    int i,j,k,m,n;
    printf("Enter size of first array: ");
    scanf("%d",&m);
    printf("Enter elements: ");
    for(i=0;i<m;i++) 
	{
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(j=0;j<n;j++) 
	{
        scanf("%d",&b[j]);
    }
    i=0;
    j=0;
    k=0;
    while(i<m&&j<n) 
	{
        if(a[i]<b[j]) 
		{
            c[k]=a[i];
            i++;    
        } 
		else 
		{
            c[k]=b[j];
            j++;            
        }
            k++;
    }
	while (i<m){
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<n){
		c[k]=b[j];
		k++;
		j++;
	}
    for(i=0;i<m+n;i++) 
	{
        printf("%d ",c[i]);
    }
}
