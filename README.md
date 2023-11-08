# Codecademy C Language Skill Path
This is a private repository for my C Language Skill Path projects and notes.

## Running a C project
1. Use the built in 'clang' compiler from Apple's Xcode tools to compile the C application.
2. Run `clang appname.c -o compiledAppName` command
3. Run the program with `./compiledAppName` command

This command compiles the program, and the `-o compiledAppName` will set a name for the compiled program that's ready to be run. You need to be in the correct directory that houses the project for this to work. Otherwise, change directory to the correct place.

## Declaring Variables
The common data types to know in C are `int`, `double`, `float`, and `char`. They are declared before the variable name when the variable is first created.

You put single quotes around char and double quotes around strings. A `double` runs faster but takes up double the memory than `float`.

`const` is a special keyword put before all constant variables to tell C that this variable cannot be changed. Best practice is to give it a name in all-caps.

## Useful tips for writing C programs
- Make sure to include `#include <stdio.h>` at the top of the document to allow certain functions to run
