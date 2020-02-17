#include "function.h"

void print_vector(Vector input){
    printf("{x:%d, y:%d, z: %d} \n", input.x, input.y, input.z);
};

int main(int argc, char** argv){
    Vector v1={3,7,10};
    print_vector(v1);
    //part 2(New memory space/address used)
    v1 = clear_vector(v1);
    print_vector(v1);

    //part 3 (results in the same memory space address being written over)
    void clear_vector_byreference(Vector *input){
    input->x = 0;
    input->y = 0;
    input->z = 0;
    };

    Vector v2 = {31,99,21};
    print_vector(v2);
    clear_vector_byreference(&v2);
    print_vector(v2);
}