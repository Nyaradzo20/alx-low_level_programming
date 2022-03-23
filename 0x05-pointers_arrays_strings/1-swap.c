#include "main.h"
/**
 *swap_int - swaps the value of two integers
 *
 *@a : first int
 *@b : second int
 *Return 0
 **/

void swap_int(int *a, int *b)
{
int temp;
/* Copy the value of num1 to some temp variable*/
temp = *a;
/*copy value of num 2 to num1*/
*b = *a;
/*cpy the value of num1 storred in temo to num2*/
*b = temp;
}
