%{
#include <stdio.h>
%}

%%
[aeiouAEIOU]    { printf("%s is a Vowel\n", yytext); }
[a-zA-Z]        { printf("%s is a Consonant\n", yytext); }
[^a-zA-Z\n]     { printf("%s is not a letter\n", yytext); }
\n              { return 0; } // Exit on newline for easy testing
%%

int main() {
    printf("Enter a string: ");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
