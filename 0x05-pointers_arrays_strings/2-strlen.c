#include "main.h"
/**
 *_strlen - prints back the length of a string
 *@s: the value to be evaluated
 *Return: length of the string
 */
int _strlen(char *s)
{
int length;
for (length = 0; s[length] != '\0'; length++);
return (length);
}
