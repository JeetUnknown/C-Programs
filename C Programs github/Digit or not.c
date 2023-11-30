//To check if given character is a digit
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a character :");
	scanf("%c",&x);
	printf("%d",x>='0' && x<='9');
	return 0;
}