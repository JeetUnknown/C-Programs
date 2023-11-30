//Area of a circle
#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter radius of the circle :");
    scanf("%f",&radius);
    area=(3.14*radius*radius);
    printf("Area of the circle is %.2f",area);
}