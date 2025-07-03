/*
Exercise 1-3. 
Modify the temperature conversion program to print a heading above the table.
*/

#include<stdio.h>

int main(){
    /*
    fahrenheit to celsius formula
    c = 5 * (f - 32) / 9
    write a program to convert fahrenheit to fahrenheit
    */
    
    int upper, lower, step, fahr, celsius;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    //heading 
    printf("Fahrenheit to Celsius Table (0-300)\n");
    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        
        fahr = fahr + step;
    }
}