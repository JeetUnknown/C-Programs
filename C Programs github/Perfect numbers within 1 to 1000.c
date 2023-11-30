//Perfect numbers within 1 to 1000
#include<stdio.h>
int main()
{
	int s,i,d;
	for(i=1;i<=1000;i++)
	{
		s=0;
		for(d=1;d<i;d++)
		{
			if(i%d==0)
			s=s+d;
		}
		if(i==s)
		printf("%d	",i);
	}
}
//Output: Perfect numbers within 1 to 1000 are printed ---->6       28      496

