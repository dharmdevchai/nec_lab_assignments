#include <stdio.h>

int match(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) return 0;
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

int isKeyword(char buffer[]) {
    if (match(buffer, "int") || match(buffer, "float") || match(buffer, "char") ||
        match(buffer, "if")  || match(buffer, "else")  || match(buffer, "while") || 
        match(buffer, "return")) {
        return 1;
    }
    return 0;
}

int main() {
    char statement[100], buffer[50];
    int j = 0;

    printf("Enter a statement (e.g., int x = 10 + y): ");
    scanf("%[^\n]", statement); 

    for (int i = 0; statement[i] != '\0'; ++i) {
        char ch = statement[i];

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == '<' || ch == '>') {
            printf("Operator: %c\n", ch);
        }

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_') {
            buffer[j++] = ch;
        } 
        else if ((ch == ' ' || ch == '\t' || ch == ';') && j != 0) {
            buffer[j] = '\0';
            j = 0; 

            if (isKeyword(buffer)) {
                printf("Keyword: %s\n", buffer);
            } else if (buffer[0] >= '0' && buffer[0] <= '9') {
                printf("Number: %s\n", buffer);
            } else {
                printf("Identifier: %s\n", buffer);
            }
        }
    }
    return 0;
}
