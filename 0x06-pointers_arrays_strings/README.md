 pointers and arrays
1..strcat is used to concatenate strings
strcat_s s for sizeof() is a safer function'
strncat n stands for numbers to be copied (str1, str2, 9);
return str1 because its the destination sstring
logic...
have to append the ifrst character of str2 to the null character if str1
***The C library function char *strncpy(char *dest, const char *src, size_t n) copies up to n characters from the string pointed to, by src to dest. In a case where the length of src is less than that of n, the remainder of dest will be padded with null bytes.

Declaration
Following is the declaration for strncpy() function.

char *strncpy(char *dest, const char *src, size_t n)
Parameters
dest − This is the pointer to the destination array where the content is to be copied.

src − This is the string to be copied.

n − The number of characters to be copied from source.
