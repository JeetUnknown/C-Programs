#include <stdio.h>
#include <math.h>

int bintogray(int bin);

int main()
{
    int bin, gray;
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    gray = bintogray(bin);
    printf("The gray code of %d is %d\n", bin, gray);
    return 0;
}

int bintogray(int bin)
{
    int a, b, gray = 0, i = 0;
    while (bin != 0)
    {
        a = bin % 10; // get the rightmost bit of bin
        bin = bin / 10; // remove the rightmost bit of bin
        b = bin % 10; // get the new rightmost bit of bin
        if ((a && !b) || (!a && b)) // if a and b are different
        {
            gray = gray + pow(10, i); // add 10^i to gray
        }
        i++; // increment i
    }
    return gray;
}