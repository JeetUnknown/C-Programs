#include <stdio.h>

int main() {
    char arr[3][10];

    for (int i = 0; i < 3; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    printf("The strings you entered are:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}