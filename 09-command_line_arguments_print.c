#include <ncurses.h>    // ncurses.h is for MAC
/*
void print_arguments(int arg_c, char **arg_v){
    for(int i = 0; i < arg_c; i++){
        printf("Command Line arguments %c", arg_v[i]);
    }
}
*/

int main(int argc, char **argv){
    printf("Hello, this is trial\n");
    //print_arguments(argc, argv);
    for(int i = 0; i < argc; i++){
        printf("Command Line arguments %i", argv[i]);
    }
}