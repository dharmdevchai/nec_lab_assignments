%{
#include <stdio.h>
%}

%%
"//".* { printf("Single-line Comment: %s\n", yytext); }
"/\*"([^*]|\*+[^*/])*\*+"/" { printf("Multi-line Comment:\n%s\n", yytext); }
.|\n                    { /* Ignore all other code code */ }
%%

int main() {
    printf("Enter C code with comments:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
