#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("Enter number of elements :");
	scanf("%d",&n);
	
	ptr=(int*) malloc(n*sizeof(int)); //memory allocation
	
	
	if(ptr == NULL)
	{
		printf("Error! memory not allocccated");
		exit(0);
	}
	
	printf("Enter elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("Sum = %d\n",sum);
	printf("Allocated memory size = %d\n",_msize(ptr));  // this command prints the size of the memory allocated :)
	
	
	free(ptr); //freeing excess memory
	return 0;
}
