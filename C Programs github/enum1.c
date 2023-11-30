#include<stdio.h>

enum Colour
{
	RED,GREEN,BLUE
};

int main()
{
	enum Colour myColour;
	myColour = BLUE;
	
	switch(myColour)
	{
		case RED : printf("My colour is RED");
			       break;
		case GREEN : printf("My colour is GREEN");
			       break;
		case BLUE : printf("My colour is BLUE");
			       break;	
		default : printf("Invalid choice");	   	       
	}
	return 0;
}

