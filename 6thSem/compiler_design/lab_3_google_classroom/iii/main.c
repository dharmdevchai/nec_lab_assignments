#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string for ab: ");
    scanf("%s", str);

    if (str[0] == 'a' && str[1] == 'b' && str[2] == '\0') {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}