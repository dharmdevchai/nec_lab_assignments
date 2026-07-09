#include <stdio.h>

int main() {
    char str[100];
    int i = 0, isValid = 1;

    printf("Enter a string for a*: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i] != 'a') {
            isValid = 0;
            break;
        }
        i++;
    }

    if (isValid == 1) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}