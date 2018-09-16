/*
**  @author - iphilip
**  @created - 16th Sep, 2018
**
**  To demonstrate the function call by value/reference
**
*/

#include <stdio.h>

/*function declaration for call-by-value*/
void swap_by_value(int x, int y){
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf( "\nWithin function `swap_by_value` values are,\n" );
    printf( "\n x = %d", x);
    printf( "\n y = %d", y);
    printf( "\n" );
}

/*function declaration for call-by-reference*/
void swap_by_reference(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf( "\nWithin function `swap_by_reference` values are,\n" );
    printf( "\n x = %d", *x);
    printf( "\n y = %d", *y);
    printf( "\n" );
}

/*function declaration for printing variable values*/
void print_values(int a, int b){
    printf( "\n Values are, \n" );
    printf( "\n a = %d", a);
    printf( "\n b = %d", b);
    printf( "\n" );
}

void main(){
    /*local variable declaration*/
    int a = 100;
    int b = 200;

    printf( "\nBefore swapping the initial values are : \n" );
    print_values(a, b);

    printf( "\nCalling swap_by_value function \n" );
    swap_by_value(a, b);
    printf( "\n After calling swap_by_value function, the values are : \n" );
    print_values(a, b);

    printf( "\nCalling swap_by_reference function \n" );
    swap_by_reference(&a, &b);
    printf( "\n After calling swap_by_reference function, the values are : \n" );
    print_values(a, b);

    printf( "\n -- End of function --\n" );

}
