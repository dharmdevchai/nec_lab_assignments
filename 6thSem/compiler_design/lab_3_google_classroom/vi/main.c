#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a string for a*b*: ");
    scanf("%s", str);
    while (str[i] == 'a') {
        i++;
    }
    while (str[i] == 'b') {
        i++;
    }
    if (str[i] == '\0') {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}