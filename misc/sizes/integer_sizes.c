// Author:       Paul Molina
// Date:         April 2019
// Version:      0.1
// Description:
// This program was written in order to show
// the sizes of integers available on a machine

#include <stdio.h>

int main()
{
    char c;
    short s;
    int i;
    long l;
    long long ll;

    printf("The size of char is: %ld\n", sizeof(c));
    printf("The size of short is: %ld\n", sizeof(s));
    printf("The size of int is: %ld\n", sizeof(i));
    printf("The size of long is: %ld\n", sizeof(l));
    printf("The size of long long is: %ld\n", sizeof(ll));

    return 0;
}
