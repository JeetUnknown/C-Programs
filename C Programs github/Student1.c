struct student 
{
	int roll;
	char name[30];
	float marks;
};
int main()
{
	struct student s ={10,"Ayan",90.5};
	//printf("%d\n",sizeof(s));
	printf("%d	%.2f	",s.roll,s.marks);
	puts(s.name);
}
