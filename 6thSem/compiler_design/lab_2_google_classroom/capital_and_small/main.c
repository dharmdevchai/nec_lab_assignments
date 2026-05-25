#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c is a Capital letter\n", str[i]);
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c is a Small letter\n", str[i]);
        }
    }
    return 0;
}
