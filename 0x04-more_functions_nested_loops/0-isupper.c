#include "main.h"
/**
 *_isupper-function checks if the char is uppercase
 *
 *@c:char checked
 *Return: (0) if uppercase otherwise return 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
