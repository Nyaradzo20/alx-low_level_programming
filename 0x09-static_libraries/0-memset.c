#include "main.h"
/**
 * _memset - Fill memory with a constant byte
 * @s: memory area to folled by char b
 * @b: constant byte to copy
 * @n: bytes of memory area to fill(number of times)
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int a;
  for (a = 0; a < n; a++)
    {
      s[a] = b;
    }
  return (s);
}
