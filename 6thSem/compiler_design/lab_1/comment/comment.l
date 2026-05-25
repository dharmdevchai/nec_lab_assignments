%{
#include <stdio.h>
%}

%%

"//".* { printf("This is Single-line comment: %s\n", yytext); }

"/*"([^*]|\*+[^*/])*"\*"+"/" { 
                        printf("This is Multi-line comment: %s\n", yytext); 
                    }

.|\n                { /* Ignore all other characters */ }

%%

int main() {
    printf("Enter input:\n");
    yylex(); // Starts Lex scanner
    return 0;
}

int yywrap() {
    return 1; // Stop scanning when input ends
}
