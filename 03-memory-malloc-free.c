#include <stdio.h>
#include <stdlib.h>


int main(){

    int num, i, *ptr, sum = 0;

    printf( "Enter the number of elements : " );
    scanf("%d", &num);

    ptr = (int*) malloc(num * sizeof(int)); //memory allocated using malloc

    if(ptr == NULL)
    {
        printf( "\nError! memory could not be allocated!" );
        exit(0);
    }

    printf( "Enter the elements to be placed into the array: ");
    for(i = 0; i < num; ++i){

        scanf("%d", ptr + i);
        sum += *(ptr + i);

    }

    printf("Sum = %d", sum);
    free(ptr);
    
    return 0;

}