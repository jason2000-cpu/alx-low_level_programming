## 0x0A. C - Argc, Argv

## ARGC - ARGV
This directory contains tasks for our: 
- Argc(Argument Count)
  - This holds the number of items in an argv arrays and is also the number of command line arguments passed into the shell prompt.
- Argv(Argument Vector _(1-D list)_)
  - This are the arguments passed into the shell prompt, passed into an array.


### Task 0

Write a program that prints its name, followed by a new line.
- If you rename the program, it will print the new name, without having to compile it again
- You should not remove the path before the name of the program

File: 0-whatsmyname.c

### Task 1

Write a program that prints the number of arguments passed into it.
- Your program should print a number, followed by a new line

File: 1-args.c

### Task 2

Write a program that prints all arguments it receives.
- All arguments should be printed, including the first one
- Only print one argument per line, ending with a new line

File: 2-args.c

### Task 3

Write a program that multiplies two numbers.
- Your program should print the result of the multiplication, followed by a new line
- You can assume that the two numbers and result of the multiplication can be stored in an integer
- If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

File: 3-mul.c

### Task 4

Write a program that adds positive numbers.
- Print the result, followed by a new line
- If no number is passed to the program, print 0, followed by a new line
- If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
- You can assume that numbers and the addition of all the numbers can be stored in an int

File: 4-add.c

### Task 5

Write a program that prints the minimum number of coins to make change for an amount of money.
- Usage: ./change cents
- where cents is the amount of cents you need to give back
- if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
- you should use atoi to parse the parameter passed to your program
- If the number passed as the argument is negative, print 0, followed by a new line
- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

File: 100-change.c











