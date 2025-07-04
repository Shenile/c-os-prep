/*
Exercise 1-9. 
Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. 
*/

#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
    int c, state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (state == OUT) {
                putchar(c);  
                state = IN; 
            }
            
        } else {
            putchar(c);     
            state = OUT;    
        }
    }

    return 0;
}
