## 0x018-DYNAMIC_LIBRARIES
Learning  dynamic libraries in low level C programming language

### Commands to create dynamic library

$ gcc *.c -c -fPIC 

This command essentially generates one object file .o for each source file .c . The -fPIC flag ensures that the code is position-independent. This means it wouldn’t matter where the computer loads the code into memory.

$ gcc *.o -shared -o liball.so

 The wildcard * tells the compiler to compile all the .o files into a dynamic library which is specified by the -shared flag. The naming convention for dynamic libraries is such that each shared library name must start with lib and end with .so


Finally, we’ll need to export the path for libraries so that programs know where to look for them by executing the following command

 $ export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH