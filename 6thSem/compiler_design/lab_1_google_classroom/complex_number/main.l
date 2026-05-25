%{
#include <stdio.h>
%}

%%
[+-]?[0-9]+(\.[0-9]+)?[+-][0-9]+(\.[0-9]+)?[iJ]  { printf("Complex Number: %s\n", yytext); }
[+-]?[0-9]+(\.[0-9]+)?[iJ]                       { printf("Purely Imaginary Complex Number: %s\n", yytext); }
.|\n                                             { /* Ignore other inputs */ }
%%

int main() {
    printf("Enter numbers to check for complex formats (e.g., 5+3i, -2.5-4j): ");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}

