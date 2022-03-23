#include "main.h"
#include "stdio.h"
/**
*_strlen - prints back the length of a string
*@s: the value to be evaluated
*Return: length of the string
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++);
return (i);
}
/**
*For loop iterates with the structure f
*upto la*st character of the array. i.e null.
*strlen funcions return value of i to man function
*ps:i variable reprsents the length of the string
*/
