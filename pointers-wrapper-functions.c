/*
    @created: 26th December, 2018
    @author: iphilip

    Demonstration of Function Pointers in C

    Function Pointers as parameter

    Source - https://www.geeksforgeeks.org/function-pointer-in-c/
*/

#include <stdio.h>

//Two simple functions
void fun1() { printf("Function 1\n"); }
void fun2() { printf("Function 2\n"); }

//Wrapper function
void wrapper(void (*fun)()){
    printf("Wrapper function before calling the passed function\n");
    fun();
    printf("wrapper function after calling the wrapped function\n");
}

int main(){
    wrapper(fun1);
    wrapper(fun2);
    
    return 0;
}