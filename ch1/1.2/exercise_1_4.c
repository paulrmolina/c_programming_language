#include <stdio.h>

int main (void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 1;
    
    // Print header for temperature
    printf("Celsius\tFahrenheit\n");
    
    celsius = lower;
    while (lower < upper) {
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("%7d%13.2f", celsius, fahr);
        celius += step;
    }

    return 0;
}