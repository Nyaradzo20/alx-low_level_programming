#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
int len = 0, counter, mid;
while (str[len] != '\0')
len++;
if (len % 2 == 0)
mid = len / 2;
else
mid = (len + 1) / 2;
for (counter = mid; counter < len; counter++)
_putchar(str[counter]);
_putchar('\n');
}
