
#include "main.h"
#include <stdio.h>

/**
 *print_array - update value.
 *@a: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
void print_array(int *a, int n)
{
int counter;
for (counter = 0; counter < n; counter++)
{
printf("%d", a[counter]);
if (counter < n - 1)
{
printf(", ");
}
}
printf("\n");
}
