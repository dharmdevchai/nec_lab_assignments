%{
#include <stdio.h>
%}

%%
if|else|while|int|float|return|char   { printf("Keyword: %s\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]* { printf("Identifier: %s\n", yytext); }
[0-9]+(\.[0-9]+)?                     { printf("Number: %s\n", yytext); }
"+"|"-"|"*"|"/"|"="|"=="|"<"|">"     { printf("Operator: %s\n", yytext); }
[ \t\n]                               { /* Ignore whitespace */ }
.                                     { printf("Unknown Token: %s\n", yytext); }
%%

int main() {
    printf("Enter a statement: ");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
