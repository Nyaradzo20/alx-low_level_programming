#include "main.h"
/**
*print_alphabet_x10 -PRINT ALPHABET IN SMALL LETTERS
*/
void print_alphabet_x10(void)
{
int row;
int alpha;
for (row = 0; row <= 9; row++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
{
_putchar('\n');
}
}
}
