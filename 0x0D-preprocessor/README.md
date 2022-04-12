Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.01
****The #ifndef directive of the C Programming Language helps in allowing the conditional compilation. The C Programming Language’s preprocessor helps in determining only if the macro provided is not at all existed before including the specific subsequent code in the C compilation process. The #ifndef preprocessor only checks If the specific macro is not at all defined with the help of the #define directive. If the condition is TRUE then it will be helpful in executing the code otherwise the else code of the #ifndef will be compiled or executed only if present.
The #define creates a macro, which is the association of an identifier or parameterized identifier with a token string. After the macro is defined, the compiler can substitute the token string for each occurrence of the identifier in the source file.\
n the C Programming Language, the #endif directive closes off the following directives: #if, #ifdef, or #ifndef. When the #endif directive is encountered, preprocessing of the opening directive (#if, #ifdef, or #ifndef) is completed.
2...Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

3Write a program that prints the name of the file it was compiled from, followed by a new line.You are allowed to use the standard library~

If we want to print the name of the program, we have to understand, what is program's name?
Since program name is the name of source file like prog.c. But, here in this program, please consider program name is the name of executable file (like prog – which is created after compilation of the program) that we are going to print using program.
The __FILE__
This macro is used to get the path of the current file. This is useful when we want to generate log files. The following code will explain its functionality.
The __LINE__
This macro can find the current line number in source file. This line number is an integer value. When log statements are generating then __LINE__ plays some useful role. See the following example to get the idea.>
This macro can return the current function. When log statements are generating then __FUNCTION__ plays some useful role. See the following example to get the idea.