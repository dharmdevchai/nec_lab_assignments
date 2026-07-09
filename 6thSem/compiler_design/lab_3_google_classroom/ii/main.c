#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a string for a+b: ");
    scanf("%s", str);
    if (str[0] != 'a') {
        printf("Rejected\n");
        return 0;
    }
    while (str[i] == 'a') {
        i++;
    }
    if (str[i] == 'b' && str[i+1] == '\0') {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    return 0;
}