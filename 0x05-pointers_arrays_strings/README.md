0>>> *n gives us the value at adress n
so *n can be used to change the value at n and the process is known a s derefferencing....

1>>>swapping  values of two integers
so you create a a new variable that will be udes in the swapping process
 in my case its c...so
 int c = *a /*  c is now = to 98*/
 int  *a = *b  /* *a is now = 42*/;
 int *b =  c /*b is now = 98*/

2>>>check the length of a string
-use a for loop because the wile loop is giving me a segmentation core dumped error.
i initialised the length variable which will go through the whole string ;
for(length = 0; s[length] != '\0'; length ++);
return length;
length will keep on looping through the string and will only stop when it gets to the null character....

3>>>Write a function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.
-used the same code from number 2,i just added _putchar (str[length]) for printing purposes

4>>>Write a function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);
So first you use the ford loop to find the length
loop through the length and -1 for the null char and decrement length ---
5>>>>/***TO BE UPDATED***/




6>>>Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);
OK  LOL I NEVER EXPECTED THIS ONE TO WORK BUT IT DID!!
i declared the length variable ,looped through thr string kusvika panull charactere;but i incremented *2 instead of length ++ i used length +=2

7...Write a function that prints half of a string, followed by a new line.
Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
>>got this one after a long time ok, so i  declared the variables length,counter and mid
used len to loop through the string to find the length
found the len then used the if atatement
if the number is odd ie n % 2  != 0 then the last characters shpud be printed,i checked if the numbers were odd and they were so i used a for loop  then started running the loop from the middle of the loop ie counter = mid then i printed the odd numbers....