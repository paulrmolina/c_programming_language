///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author:  Paul Molina
// Date:    07/2019
// Version: 0.1
//
// Description:
//
// This program was created in order to do exercise 15 in K&R's C book.
#include <stdio.h>

// Prototype
int convertFahrToCelc( int temp );

int main()
{
    int fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while( fahr <= upper )
    {
        printf( "%d\t%d\n", fahr, convertFahrToCelc(fahr) );
        fahr = fahr + step;
    }

    return 0;
}

int convertFahrToCelc( int temp )
{
    return 5 * ( temp - 32 ) / 9;
}
