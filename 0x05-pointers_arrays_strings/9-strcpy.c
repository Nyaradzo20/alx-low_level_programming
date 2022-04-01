#include "main.h"
/**
 *_strcpy - update value.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *Return: zilch.
 */
char *_strcpy(char *dest, char *src)
{
int counter = 0;
while (src[counter] != '\0')
{
dest[counter] = src[counter];
counter++;
}
dest[counter] = '\0';
return (dest);
}
