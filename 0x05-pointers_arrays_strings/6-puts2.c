#include "main.h"
/**
*puts2 - print pair values.
*@str: value to be evaluate.
*Return: not.
*/
void puts2(char *str)
{
int len;
for (len = 0; str[len] != '\0'; len += 2)
{
_putchar(str[len]);
}
_putchar('\n');
}
