#include <stdio.h>

/* temperature conversion program */

#define STEP 20
#define LOWER 0
#define UPPER 300

float celsius(float fahr);                       // function prototype

int main()
{
        int i;
        printf("Fahrenheit to Celsius\n");
        for (i=LOWER; i<=UPPER; i+=STEP)
        {
                
                printf("%3d%cf = %6.2f%cc\n", i, 248, celsius(i), 248);
        }
        return (0);
}

float celsius(float fahr)
{
        float cel;
        return cel = (fahr-32) * 5.0/9.0;
}