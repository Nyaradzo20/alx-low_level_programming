#include <stdio.h>
/**
 * main - print small an capital letter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha;
char big;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
for (big = 'A'; big <= 'Z'; big++)
putchar(big);
putchar('\n');
return (0);
}
