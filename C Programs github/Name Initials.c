#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter a full name: ");
    fgets(name, 100, stdin);

    printf("Initials: ");
    for (int i = 0; i < strlen(name); i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            printf("%c",name[i]);
        }
    }

    return 0;
}