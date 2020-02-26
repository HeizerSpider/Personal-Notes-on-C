#include <stdlib.h>
#include <stdio.h>

void* special_function(int arg);

void* special_function(int arg){
    if (arg==0){
        char* c = malloc(sizeof(char));
        c[0] = 'a';
        return c;
    } 
    else{
        int* i = malloc(sizeof(int));
        i[0] = 128;
        return i;
    }

}