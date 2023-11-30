#include<stdio.h>
#include<string.h>
union abc
{
	int a;
	char b[100];
	float c;
};
 int main()
 {
	 union abc u1;
	 u1.a=10;
	 printf("%d\n",u1.a);
	 strcpy(u1.b,"Hello");
	 printf("%s\n",u1.b);
	 u1.c=55.56;
	 printf("%.2f\n",u1.c);
	 printf("%d",sizeof(u1));
}