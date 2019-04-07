// Author:  Paul Molina
// Date:    April 2019
// Version: 0.1
//
// Description:
// This program was written to solve exercise 1-9
// in K&R's C Programming Language book which asks
// to copy input to output and replace each string
// of one or more blanks by a single blank
#include <stdio.h>

int main()
{
    int extra_space;
    int c;

    while( (c = getchar()) != EOF )
    {
        if( c == ' ' ) // found a space character
        {
            if(!extra_space)
            {
                putchar(c);
                ++extra_space;
            }
            else
            {
                // do nothing, continue
            }
        }
        else // Found a non-space char, print and reset counter
        {
            putchar(c);
            extra_space = 0;
        }
    }

    return 0;
}
