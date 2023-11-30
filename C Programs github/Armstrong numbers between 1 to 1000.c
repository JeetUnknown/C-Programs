//Armstrong between in 1 to 1000
#include<stdio.h>
#include<math.h>
int main()
{
	int count,d,s,i,j;
	for(i=1;i<=1000;i++)
	{
	count=0;
	s=0;
	j=i;
	while(j!=0)
	{
	count++;
	j=j/10;
	}
	j=i;
	while(j!=0)
	{
	d=j%10;
	s=s+pow(d,count);
	j=j/10;	
	}	
	if(s==i)
	printf("%d  ",i);
    }
}
/*Output: Armstrong numbers within 1 to 1000 is printed
1       2       3       4       5       6       7       8       9       153     370     371     407
*/
