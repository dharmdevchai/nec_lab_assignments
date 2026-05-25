#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                printf("%c is a Vowel\n", ch);
            } else {
                printf("%c is a Consonant\n", ch);
            }
        } else {
            printf("%c is not a letter\n", ch);
        }
    }
    return 0;
}
