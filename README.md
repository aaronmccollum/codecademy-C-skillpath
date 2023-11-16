# Codecademy C Language Skill Path
This is a repository for my C Language Skill Path projects and notes.

## Programs and skills practiced
- helloworld.c : first C program
- grocerystore.c : initializing variables and inputing them in printf() statement
- space.c : practicing conditional logic with Switch statement
- print_date.c : more advanced program using if/else and switch statements

## Running a C project
1. Use the built in 'clang' compiler from Apple's Xcode tools to compile the C application.
2. Run `clang appname.c -o compiledAppName` command
3. Run the program with `./compiledAppName` command

This command compiles the program, and the `-o compiledAppName` will set a name for the compiled program that's ready to be run. You need to be in the correct directory that houses the project for this to work. Otherwise, change directory to the correct place.

## Useful tips for writing C programs
- Make sure to include `#include <stdio.h>` at the top of the document to allow certain functions to run

## Declaring Variables
The common data types to know in C are `int`, `double`, `float`, and `char`. They are declared before the variable name when the variable is first created.

You put single quotes around char and double quotes around strings. A `double` runs faster but takes up double the memory than `float`.

`const` is a special keyword put before all constant variables to tell C that this variable cannot be changed. Best practice is to give it a name in all-caps.

## Printing variables
With the `printf()` function, you will need to do the following:

```
char a = "A"
printf("%d\n", a);
```
This substitutes variable `a` with the `%d` in the string.

The `printf()` function can take 'specifiers' which you can place inside the string to specify the data type you are about to print.
- %d: for printing integers
- %f: for printing floating-point numbers
- %c: for printing characters
- %s: for printing strings
- %p: for printing memory addresses
- %x: for printing hexadecimal values


## Conditionals
Conditional (if/else) statements in C are very similar to JavaScript. 
```
if (condition) {
  // Some code;
} else if (condition) {
  // Some code;
} else {
  // Some code;
```
C also has the same ternary conditional statement that JavaScript has:
`condition ? do something : do something else;`

Logical operators are `&&`, `||`, and `!`.

Relational operators are `>`, `<`, and `==`.

## Loops
C has similar "while" loops and "for" loops to JavaScript as well. For Loops are used when you know how many times you want to iterate through something, and a While Loop can be used for the opposite - when you are unsure how many times a loop will need to run.

```
while (condition) {
  // code here;
  iterator;
}
```
```
for (int i; condition; iterator) {
  //code here;
}
```

## Errors
There are four major error types to know in C. They are found in the following order:
1. Compile-time errors: usually syntax errors
2. Link-time errors
3. Run-time errors: happens during the program running
4. Logic errors: output isn't what you expect or no output happens

## Arrays
Arrays in C are different than other programming languages like JS and Python. In C, an array is a grouping of variables of the same type surrounded by `{ }`. You can create ararys of other data types, but you have to specify how many variables will be in the array with square brackets. With an 'uninitialized' array (array without any values), you have to specify the size so the compiler knows how much memory to allocate for the future variables. With an 'initialized' array, you do not need to specify a variable number in the square brackets, as it is apparent in the array itself. But you will still need to add `[]` to the end of the name.
```
int myArray[] = {4, 7, 2, 9};
```
Accessing arrays are similar to other languages. `myArray[1] // equals 7`. If you go beyond the last index, or if you use negative indexes, data will be corrupted or a random value will be accessed, as you are accessing another unallocated part of memory.

`sizeof(arr)`: returns an int with the numer of bytes in the array. Great for making 'while' and 'for' loops reusable. This function can also be used on data types itself to find the size per element. Then you can determine the size of an array by dividing the total bytes by the bytes-per-element.
`int len = sizeof(arr) / sizeof(dataType)`

Multi-dimentional arrays also exist in C. `int myArr[2][3]` is an array of two nested array of three elements each. You can get the sizes of each array with the following:
```
int rowSize = sizeof(parent) / sizeof(parent[0]);
int columnSize = sizeof(parent[0]) / sizeof(dataType);
```

## Strings
Strings are arrays in C. You use the "char" data type to start a string, then you provide a name, and lastly you add [] at the end (because it's an array). All array functions are available to strings as a result.
`char myStr[] = "Hello World";`
`printf("%s\n", myStr);`
Entire strings are surrounded by double quotes, but single characters (char) are surrounded by single quotes. Switching them around could cause errors. If you create a string using an array, then you have to list each character index by index in single quotes, and you have to include a null character at the end `'\0'`.

To get the length of a string, you can use `strlen(str)`. But in order to do that, you must include `#include<string.h>` at the top of your application.

To concatenate a string in C, you can use `strcat(dst, src)` to do so. It takes a source string and adds it to the destination string. You can only do two at a time, so multiple strings will need to be done one after the other. The function actually creates a new array with the length of destination + source + 1 and puts both strings into that, then it deletes the place in memory where destination was and replaces it with the new combined string array.

To copy a string to an empty destination, you can use `strcopy(dst, src)` which will copy the source and place it in the destination. The destination string must be long enough to accept the source string plus the extra spot for the null character. You can do this by making a variable like so: `int len = strlen(src) + 1`.
