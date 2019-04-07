// Author:  Paul Molina
// Date:    April 2019
// Version: 0.1
//
// Description:
// This was created in order to solve exercise 1-8 in
// K&R's C Programming Language book which requires
// counting blanks, tabs and newlines.

#include <stdio.h>

int main()
{
    int c;
    int nc;

    while( (c = getchar()) != EOF )
    {
        if( c == '\n' || c == '\t' || c == ' ')
        {
            nc++;
        }
    }
    printf( "Number of newlines, tabs and spaces: %d\n", nc );

    return 0;
}
