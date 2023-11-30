#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Letter :");
	scanf("%c",&ch);
//***********************************************
/*	printf("ASCII value :%d\n",(int)ch);
	if((int)ch>=65 && (int)ch<=90)
	{
		printf("upper case");
	}
	else if((int)ch>=97 && (int)ch<=122)
	{
		printf("lower case");
	}
*/
//***********************************************
/*	if(ch>=65 && ch<=90)
	{
		printf("upper case");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("lower case");
	}
*/
//************************************************
	if(ch>='A' && ch<='Z')
	{
		printf("upper case");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("lower case");
    }
    else
	{
		printf("Not English Letter");
	}
}