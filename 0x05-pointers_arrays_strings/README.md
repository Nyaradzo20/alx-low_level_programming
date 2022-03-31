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
