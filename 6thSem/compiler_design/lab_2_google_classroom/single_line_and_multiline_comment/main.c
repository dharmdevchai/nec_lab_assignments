#include <stdio.h>

int main() {
    char code[500];
    printf("Enter C code (Type '#' at the end and press Enter to finish):\n");
    scanf("%[^#]", code); 

    for (int i = 0; code[i] != '\0'; i++) {
        // Look for Single-line comment: //
        if (code[i] == '/' && code[i+1] == '/') {
            printf("Single-line Comment: ");
            while (code[i] != '\n' && code[i] != '\0') {
                printf("%c", code[i]);
                i++;
            }
            printf("\n");
        }
        // Look for Multi-line comment: /*
        else if (code[i] == '/' && code[i+1] == '*') {
            printf("Multi-line Comment: ");
            printf("%c%c", code[i], code[i+1]);
            i += 2;
            while (code[i] != '\0' && !(code[i] == '*' && code[i+1] == '/')) {
                printf("%c", code[i]);
                i++;
            }
            if (code[i] != '\0') {
                printf("*/\n");
                i++; 
            }
        }
    }
    return 0;
}
