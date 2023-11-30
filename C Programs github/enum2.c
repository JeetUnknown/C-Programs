#include<stdio.h>
enum boolean{false,true};
		   //  0,   1   <---- index values
enum dow{sun,mon,tue,wed,thu,fri,sat};
    //    0,  1,  2,  3,  4,  5,  6  <---- index values
int main(void)
{
	enum boolean b1;
	enum dow d1;
									/*index values are assigned to the defined members 
									of the enum set when not assigned by the user*/
	b1=false;
	printf("\n%d",b1);
	b1=true;
	printf("\n%d",b1);
	d1=sun;
	printf("\n%d",d1);
	return 0;	
}