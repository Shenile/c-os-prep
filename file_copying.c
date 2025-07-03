/*
    using only getchar(), putchar()
    writing a input-output buffer.
*/

#include<stdio.h>

int main(){
    // read the input
    int c = getchar();

    while((c = getchar()) != EOF){
        putchar(c);
    }
}