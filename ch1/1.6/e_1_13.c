#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c, i, state, wc;

    wc = state = 0;

    while( (c = getchar()) != EOF)
    {
        if( c == ' ' || c == '\t' || c == '\n' )
        {
            if( state == IN )
            {
                ++wc;
            }
            
            state = OUT;
        }
        else
        {
            state = IN;
        }
    }
    
    // Print the word count
    for( i = 0; i < wc; i++ )
    {
        printf("    *\n" );
    }

    // Print the footer
    printf("word count\n");

    return 0;
}
