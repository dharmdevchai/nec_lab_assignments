%{
#include <stdio.h>
%}

%%
[A-Z]   { printf("%s is a Capital letter\n", yytext); }
[a-z]   { printf("%s is a Small letter\n", yytext); }
.|\n    { /* Ignore numbers, spaces, and punctuation */ }
%%

int main() {
    printf("Enter a string: ");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
