#include <stdio.h>

int main()
{
    int c, i, x, nwhite, nother;
    int ndigit[10];
    int highestCharCount;

    // Fill the array with default values
    for( i = 0; i < 10; i++ )
    {
        ndigit[i] = 0;
    }

    nwhite = nother = 0;
    highestCharCount = 0;

    while( (c = getchar()) != EOF )
    {
        if( c >= '0' && c <= '9' )
        {
            ++ndigit[c - '0'];
        }
        else if( c == ' ' || c == '\n' || c == 't' )
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
    }
    
    for( i = 0; i < 10 ; i++ )
    {
        if( ndigit[i] > highestCharCount );
        {
            highestCharCount = ndigit[i];
        }
    }

    if( nwhite > highestCharCount )
    {
        highestCharCount = nwhite;
    }

    if( nother > highestCharCount )
    {
        highestCharCount = nother;
    }

    // Print largest historygram
    for( i = highestCharCount; i > 0; i-- )
    {
        // Print current row #
       // printf("%d ", i);
        
        // Print numbers histogram first
        for( x = 0; x < 10; x++ )
        {
            // Print a star if this number exists
            if( ndigit[x] >= i )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        //print number of white spaced
        if( nwhite >= i )
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }

        //print number of other chars
        if( nother >= i)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }

        printf("\n");
    }

    // Print bottom of histogram
    for( i = 0 ; i < 10; i++ )
    {
        printf("%d ", i);
    }

    printf("w ");
    printf("o\n");

    return 0;
}
