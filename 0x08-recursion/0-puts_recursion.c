#include "main.h"
/**
 * _puts_recursion - print string with new line
 * @s: string to print
 */
void _puts_recursion(char *s)

{
    while (*s != '\0') 
    {
        putchar(*s);
        *s++;
    }
    
}
