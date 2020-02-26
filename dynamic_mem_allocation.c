#include "dynamic_mem_allocation.h"

int test_static(void){
   static int static_variable = 20;
   static_variable += 1;
   return static_variable;
}
 
int test_local(void){
   int local_variable = 20;
   local_variable += 1;
   return local_variable;
}
 
void test_global(void){
   global_variable ++;
}

int main(int argc,char** argv){
    // printf("The global variable is %d \n", global_variable);
    // test_global();
    // printf("The global variable is now %d \n", global_variable);
    // printf("The static variable is %d \n", test_static());
    // printf("The static variable is %d \n", test_static());
    // //Calling test_static the second time skips the initialization of static_variable
    // printf("The local variable is %d \n", test_local());
    // printf("The local variable is %d \n", test_local());

//array cannot have dynamic memory allocation
//Hence, malloc or calloc has to be used

    int buffersize;
    printf("Enter total number of elements: ");
    scanf("%d", &buffersize);

    //allocates memory in heap
    int *x = (int*) malloc(sizeof(int)*buffersize); //type cast it
    //print the address that x is pointing to
    printf("Memory address allocated by malloc starts at 0x%11x\n", x);

    //print the address of pointer x
    printf("This pointer is stored at address 0x%11x\n", &x);

    //do something with the array
    for(int i=0; i<buffersize; i++){
        x[i]=i;
    }

    printf("Enter additional number of elements:");
    scanf("%d", &buffersize);

    //resize the array, buffersize can be smaller than the original amount. Remainder is automatically 'freed'
    //the unused memory initially pointed by x is also 'freed'
    int *y=realloc(x, buffersize);
    printf("Memory address allocated by realloc starts at 0x%11x\n", y);
    printf("This new pointer is stored at address 0x%11x\n", &y);
    for(int i=0; i<buffersize; i++){
        printf("Original content element %d is %d \n", i, x[i]);
        x[i]=i; //do smt with array
    }

    //free heap manually
    free(y);
}
