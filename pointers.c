#include "cclass.h"
int main(int argc, char** argv){
    // //pointer 1
    // int vector_int[3] = {1,2,3};
    // int *vector_int_pointer = vector_int;
    // printf("Address of vector_int array is 0x%11x\n", vector_int_pointer);
    // printf("Address of the first element in vector_int array is 0x%11x\n", &vector_int[0]);
    // printf("Address of the second element in vector_int array is 0x%11x\n", &vector_int[1]);
    // printf("Address of the third element in vector_int array is 0x%11x\n", &vector_int[2]);
    
    // //& is the "address of"

    // printf("Printing address using pointer : \n");
    // printf("Address of the first element in vector_int array is 0x%11x\n", vector_int_pointer);
    // printf("Address of the first element in vector_int array is 0x%11x\n", vector_int_pointer+1);
    // printf("Address of the first element in vector_int array is 0x%11x\n", vector_int_pointer+2);

    // //pointer 2: change the second element of vector_int

    // printf("The original second element is %d\n", vector_int_pointer[1]);
    // vector_int_pointer[1] = 5;
    // printf("The new second element is %d\n", vector_int_pointer[1]);
    // printf("The new second element is %d\n", *(vector_int_pointer+1));

    //pointer 3
    int z = 5;
    int *z_pointer = &z;
    //z pointer here stores the address to z rather than to store the content of z

    printf("Value of z is %d \n", z);
    printf("Z is stored in address 0x%llx\n", z_pointer);
    printf("The pointer to Z is stored in address 0x%llx\n", &z_pointer);
    printf("Size of Z pointer is: %d \n", sizeof(z_pointer));
 
    // change value of z through pointer
    *z_pointer = 6;
    printf("The new value of z is %d\n", *z_pointer);


}