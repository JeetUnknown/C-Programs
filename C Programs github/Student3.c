#include<stdio.h>
struct student 
{
	char name[30];
	int roll;
	int marks;	
};

struct student st[100]={
	{"Jeet",01,95},{"Bimal",02,85},{"Kuntal",03,75}};


int main()
{
	printf("NAME	ROLL	MARKS\n");
	printf("----	----	-----\n");
	for (int i=0;i<=2;i++)
	{
		printf("%s	%d	%d\n",st[i].name,st[i].roll,st[i].marks);	
	}
	struct student max;
	max=st[0];
	for(int i=0;i<=2;i++)
	{
		if(st[i].marks>max.marks)
		{
			max=st[i];
		}
	}
	printf("Student details with maximum marks --->")
	printf("%s	%d	%d",max.name,max.roll,max.marks);
}