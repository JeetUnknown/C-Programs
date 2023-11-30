#include<stdio.h>
struct student
{
	int roll;
	char name[30];
	int marks;	
};
int main()
{
	struct student s;
	printf("Enter student name roll marks :");
	scanf("%s %d %d",s.name,&s.roll,&s.marks);
	printf("NAME	ROLL	MARKS\n");
	printf("----    ----    -----\n");
	printf("%s	%d	%d",s.name,s.roll,s.marks);
}