/*
Exercise 1-4. 
Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include<stdio.h>

int main(){
    /*
    Formula : c = 5 * (f - 32) / 9
    c * (9.0/5) = f - 32
    c * (9.0/5) + 32 = f
    */

    int upper, lower, step, fahr, celsius;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    //heading 
    printf("Celsius to Fahrenheit Table (0-300)\n");
    celsius = lower;
    while(celsius <= upper){
        fahr = (celsius * (9.0/5)) + 32;
        printf("%3d\t%6d\n", celsius, fahr);
        
        celsius = celsius + step;
    }
}