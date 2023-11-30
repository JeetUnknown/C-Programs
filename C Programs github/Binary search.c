//Binary search
#include<stdio.h>
int main()
{
	int arr[100],n,key,i,lb,ub,mid;
	printf("Enter no of elements :");
	scanf(" %d",&n);
	printf("Enter elements :");
	for(i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);	
	}
	lb=0;
	ub=n-1;
	printf("Enter key value ");
	scanf("%d",&key);
	while(lb<=ub)
        {
            mid=(lb+ub)/2;
	  if(key==arr[mid])
	   {
	    printf("found at %d",mid+1);
	    break;
	   }	
	  else if(key>arr[mid])
	    lb=mid+1;
	  else 
	  ub=mid-1;
	    }
	if(lb>ub)
	printf("Not found");
}

