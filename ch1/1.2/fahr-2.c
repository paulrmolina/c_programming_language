#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    
    // Print header
    printf("Fahrenheit\tCelcius\n");
    printf("----------\t-------\n");
    //printf("\n");

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%9d| %11d|\n", fahr, celsius);
        fahr = fahr + step;
    }
}