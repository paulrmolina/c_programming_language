////////////////////////////////////////////////////////////////////////////////
//  Author:  Paul Molina
//  Version: 0.1
//  Date:    July 2019
//
//  Description:
//  This program was written in order to solve exercis exercise 1-12 of K&R's
//  C Programming Language which required that all words input be printed
//  separately on its own line.
//
////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c;
    int state = OUT;


    while( ( c = getchar() ) != EOF ) {
        // We are out of a word a word. Let's print it out!
        if( c == ' ' || c == '\t' )
        {
            // We were in a word, now we're out and print a new line
            if( state == IN )
            {
                putchar( '\n' );
            }
            state = OUT;
        }
        else if ( state == OUT )
        {
            putchar( c );
            state = IN;
        }
        else
        {
            putchar( c );
        }
    }
    
    return 0;
}
