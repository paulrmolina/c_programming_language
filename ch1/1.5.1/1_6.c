#include <stdio.h>

void main()
{
  int c;

  // Verifies that any char sent through by getchar
  // will be a 1.
  while(c = getchar() != EOF) {
    putchar(c + '0'); // Have to add char 0 as the
                      // value will be returned as
                      // binary 0 or 1
    putchar('\n');
  }

  // Verifies that c is 0 once EOF is encountered
  putchar(c + '0');
  putchar('\n');
}
