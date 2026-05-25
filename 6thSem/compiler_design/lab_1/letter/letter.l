%{
#include <stdio.h>
%}

%%

[a-z]   { printf("This is Small Letter: %s\n", yytext); }

[A-Z]   { printf("This is Capital Letter: %s\n", yytext); }

.|\n    { /* Ignore all other characters */ }

%%

int main() {
    printf("Enter input:\n");
    yylex(); 
    return 0;
}

int yywrap() {
    return 1; 
}
