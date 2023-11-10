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


