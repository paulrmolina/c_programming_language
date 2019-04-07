// Author:
// Date:
// Version:
//
// Description:
// This program was written to solve exercise 1-10 of K&R's
// C Programming Language book which replaces all tab characters
// with \t and all backspace characters with \b and all backslashes
// with \\

#include <stdio.h>

int main()
{
    int c;

    while ( (c = getchar()) != EOF)
    {
        if ( c == '\t' )
        {
            printf( "\\t" );
        }
        else if ( c == '\b' )
        {
            printf( "\\b" );
        }
        else if ( c == '\\' )
        {
            printf( "\\\\" );
        }
        else
        {
            putchar( c );
        }
    }

    return 0;
}
