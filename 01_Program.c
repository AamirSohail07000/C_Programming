#include<stdio.h> 
// #include<stdio.h> = pre processor directive 


int main(){
    printf("Hello World");
    return 0;
}


// #include<stdio.h>
// This line is a preprocessor directive.
// It tells the compiler to include the stdio.h header file, which stands for Standard Input Output.
// The stdio.h file contains functions for input (like scanf) and output (like printf).


// int main() {
// This is the main function, the entry point of any C program.
// The int before main indicates that the function will return an integer value to the operating system after execution.
// The { marks the start of the main function's body.


// printf("Hello World");
// The printf function is used to print output to the screen.
// "Hello World" is a string literal enclosed in double quotes, which will be displayed as it is.
// The semicolon ; at the end indicates the end of this statement.

// return 0;
// This line ends the program and returns the value 0 to the operating system.
// In C, returning 0 typically indicates that the program executed successfully.

// }
// This curly brace marks the end of the main function.


// How It Works:
// The #include<stdio.h> makes the printf function available for use.
// The main() function is where the program starts executing.
// The printf function prints "Hello World" to the console.
// The return 0 indicates that the program finished without errors.