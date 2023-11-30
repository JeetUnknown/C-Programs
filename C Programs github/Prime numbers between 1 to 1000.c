//Prime number between 1 to 1000
#include<stdio.h>
int main()
{
int i,d,r,count=0;
for(i=1;i<=1000;i++)
{
    count=0;
  for(d=1;d<=i;d++)  
  {
      r=i%d;
      if(r==0)
      count++;
  }
  if(count==2)
  printf("%d  ",i);
}
}

