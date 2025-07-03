/*
Exercsise 1-6.
Verify that the expression getchar() != EOF is 0 or 1. 
*/

#include<stdio.h>

int main(){
    // read the input
    int c = getchar();

    int result = (c != EOF);

    printf("%d", result);
}