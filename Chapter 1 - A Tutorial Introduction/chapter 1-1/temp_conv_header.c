#include <stdio.h>

int main(){

        float fahr, celsius;
        float start, stop, step;

        start = 0;
        stop = 300;
        step = 20;

        fahr = start;
        printf("Temperature Conversion from 0-300\n");
        printf("%3s %6s\n", "Fahr", "Celsius");
        while (fahr <= 300){
                celsius = (5.0/9.0) * (fahr - 32.0);
                printf("%3.0f  %6.1f\n", fahr, celsius);
                fahr += step;
        }

        return (0);


}