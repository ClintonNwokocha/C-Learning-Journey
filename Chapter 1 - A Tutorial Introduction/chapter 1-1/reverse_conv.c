#include <stdio.h>
/* Program that prints conversion table in reverse order*/

int main(){

        float fahr, celsius;
        float start, stop, step;

        start = 300; stop = 0; step = 20;
        celsius = 300;
        printf("Conversion of celsius to fahrenjeit from 300-0\n");
        printf("%7s %10s\n", "Celsius", "Fahr");

        while (celsius >= stop){
                fahr = (9.0/5.0) * celsius - 32.0;
                printf("%7.0f %10.2f\n", celsius, fahr);
                celsius -= step;
        }
        return (0);
}