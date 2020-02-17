#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//defining struct

typedef struct Vector_Int
{
    int x;
    int y;
    int z;
    char name[64];
}Vector;

void print_vector(Vector input);

//part 2
Vector clear_vector(Vector input){
   input.x = 0;
   input.y = 0;
   input.z = 0;

   return input;
};

//part 3
void clear_vector_byreference(Vector *input);
