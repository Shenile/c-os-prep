/*
Exercise 1-8.
Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main() {
    int c, nb, nt, nl;
    nb = nt = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == ' ') {
            ++nb;
        }
    }

    printf("number of (tabs, newlines, blanks): %d, %d, %d\n", nt, nl, nb);

    return 0;
}
