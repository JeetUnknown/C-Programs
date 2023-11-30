//Nearest Prime of a number
#include<stdio.h>
int main()
{
    int n,rn,ln,count,dr,dl;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        count=o;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
            rn=i;
            break;
        }
    }
    for(i=n-1;;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
           ln=i;
           break; 
        }
    }
    dr=rn-n;
    dl=n-ln;
    if(dr<dl)
    printf("\n%d",dr);
    else if(dl<dr)
    printf("\n%d",dr);
    if(dr<dl)
    printf("\nBoth %d and %d are equidistant",rn,ln);
}
//Output : Nearest prime number of the user input number is printed