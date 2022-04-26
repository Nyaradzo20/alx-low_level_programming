#include <stdio.h>
/**
 * main - omits q & e
 *
 * Return: Always 0 (unsigned chars)
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
if (alpha != 'q' && alpha != 'e')
{
putchar(alpha);
}
putchar('\n');
return (0);
}
