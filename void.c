#include "void.h"

int main(int argc, char** argv){
    char c = *((char *)special_function(0));
    int i = *((int *) special_function(1));
    printf("Result of special function with arg 0 : %c \n", c);
    printf("Result of special function with arg 1 : %d \n", i);
}