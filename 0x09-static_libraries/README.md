# C - Static Libraries
## Step 1:
    gcc -c -Wall -Wextra -Werror *.c   
### description
    compile and assemble but do not link

## Step 2:
    $ ar -rc libname.a *.o
### description
    Creates a static library named "libname.a" and puts the copies of all object files in that directory inside the library

## Step 3:
    $ ranlib libname.a
### description
    Indexing - used by the compiler to speed up symbol - lookup inside the library and to make sure the order of 
    the symbols in the library will not matter during compilation

## Step 4:
   $ gcc main.c -L. lname -o main
### description
   creating final executable file
## Step 5:
    $ ar -t libname.a
### description
    To list the names of the object files in the library "libname.a"

