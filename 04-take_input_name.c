/**
**  @author - iphilip
**  @created - 15th September, 2018
**  Program to accept various types of Inputs
**  
**  Inspired by - https://www.tutorialspoint.com/cprogramming/c_input_output.htm
**
*/

#include<stdio.h>


int main(){

    char name[50];
    int number, no;

    printf( "\n\n1\n" );
    printf( "Demonstrating input of a character : - \n");
    printf( "Please enter a Single digit number only : ");
    no = getchar();
    printf( "\nYou entered number : ");
    putchar( no );

    printf( "\n\n2\n" );
    printf( "Demonstrating input of multiple values in single line : - \n" );
    printf( "Enter a Name and a number separated by space: ");
    scanf("%s %d", name, &number);

    printf( "\nYou entered : %s %d \n", name, number);

    return 0;
}