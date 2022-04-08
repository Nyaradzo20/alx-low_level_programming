#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *arr;/*array declaration*/
int i;/*indexing(this will loop through array*/
arr = malloc(size * sizeof(char));
 /*memory allocation using malloc*/
if (arr == NULL)
return (NULL);
if (size == 0)
return (NULL);
for (i = 0; i < (int)size; i++)
{
arr[i] = c;
}
return (arr);
}
