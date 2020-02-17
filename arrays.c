#include "cclass.h"
int main(int argc, char** argv){
    int vector_int[3] = {1,2,3};
    float vector_float[3] = {0.3,0.4,0.5};
    char characters[5] = {'a', 'e', 'i', 'o', 'u'};

    // array sizes are constant and not dynamic

    printf("Contents of vector_int %d %d %d \n", vector_int[0], vector_int[1], vector_int[2]);

    printf("Contents of vector_float %f %f %f \n", vector_float[0], vector_float[1], vector_float[2]);

    printf("Contents of the second char: %c \n", characters[1]);
    }