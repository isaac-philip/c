
# include <stdio.h>

int a = 10;
int array_m[a];

int main(){
    printf("Hello");

    return 0;
}

/**
$ ./variables-declared-outside-function.out 
Helloiphilip@3inmiphilipgcc variables-declared-outside-function.c -o variables-declared-outside-function.out
variables-declared-outside-function.c:5:5: error: variable length array
      declaration not allowed at file scope
int array_m[a];
    ^       ~
1 error generated
**/