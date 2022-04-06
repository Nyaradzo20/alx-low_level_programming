#include "main.h"
#include <stdio.h>
/**
 *_isdigit - checks for a digit
 *@c : is the character being checked for
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
