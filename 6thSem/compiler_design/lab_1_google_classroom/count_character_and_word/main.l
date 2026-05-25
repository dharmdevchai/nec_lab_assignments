%{
#include <stdio.h>
int word_count = 0;
int char_count = 0;
%}

%%
[a-zA-Z0-9]+    { word_count++; char_count += yyleng; }
.               { char_count++; }
\n              { char_count++; return 0; } // Stop execution on Enter to print results
%%

int main() {
    printf("Enter a string: ");
    yylex();
    printf("\n--- Results ---\n");
    printf("Total Words: %d\n", word_count);
    printf("Total Characters: %d\n", char_count-1);
    return 0;
}

int yywrap() {
    return 1;
}
