/* *
 * Program to demonstrate macros
 *  @created - 26th December, 2018
 * 
 * */

#include <stdio.h>

#define twice(x) 2*x
#define newline printf("\n");

int main(){
    printf("Output of Macro is %d", twice(3));
    newline
    return 0;
}