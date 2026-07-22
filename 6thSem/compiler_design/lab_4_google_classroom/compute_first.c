#include <stdio.h>
//#include <conio.h>
#include <ctype.h>
int numProductions;
char lhs[20];
char rhs[20][20];
char result[20];
int resultIdx;
void findFirst(char c);
void addToResult(char c);
int main() {
 int i, j;
 char choice;
 printf("Enter number of productions: ");
 scanf("%d", &numProductions);
 printf("Enter productions (e.g., E=TR or E=# for epsilon):\n");
 for (i = 0; i < numProductions; i++) {
 scanf(" %c=%s", &lhs[i], rhs[i]);
 }
 do {
 printf("\nEnter a Non-Terminal to find its FIRST set: ");
 scanf(" %c", &choice);
 resultIdx = 0;
 findFirst(choice);
 printf("FIRST(%c) = { ", choice);
 for (i = 0; i < resultIdx; i++) {
 printf("%c ", result[i]);
 }
 printf("}\n");
 printf("Do you want to continue? (y/n): ");
 scanf(" %c", &choice);
 } while (choice == 'y' || choice == 'Y');
// getch();
 return 0;
}
void findFirst(char c) {
 int i;
 if (!isupper(c)) {
 addToResult(c);
 return;
 }
 for (i = 0; i < numProductions; i++) {
 if (lhs[i] == c) {
 if (rhs[i][0] == '#') {
 addToResult('#');
 }
 else if (!isupper(rhs[i][0])) {
 addToResult(rhs[i][0]);
 }
 else {
 findFirst(rhs[i][0]);
 }
 }
 }
}
void addToResult(char c) {
 int i;
 for (i = 0; i < resultIdx; i++) {
 if (result[i] == c) {
 return;
 }
 }
 result[resultIdx++] = c;
}
