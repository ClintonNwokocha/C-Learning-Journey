#include <stdio.h>   /*Header File*/

/* A program that converts from celsius to fahrenheit from the number 300-0*/

int main(){

        float fahr, celsius;
        float start, stop, step;   /*initializing variables*/


        start = 0; stop = 300; step =20;
        celsius = start;
        printf("Celsius to Fahrenheit Conversion Table\n");
        printf("%6s %10s\n", "Celsius", "Fahrenheit");

        while (celsius <= stop){
                fahr = (9.0 / 5.0) * celsius + 32.0;
                printf("%6.0f %10.2f\n", celsius, fahr);
                celsius += step; 
        }

        return (0);
}