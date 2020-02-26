#include "function_pointers.h"

//part 1
int sum(int* array, int size){
    int sum_value = 0;
    for (int i=0; i<size; i++){
        sum_value += array[i];
    }
    return sum_value;
}


// int main(){
//     int array[10] = {1,2,3,4,5,6,7,8,9,10};

//     //call the function using a pointer
//     int result = sum_function_pointer(array, 10);

//     printf("The result is %d \n", result);
//     return 0;
// }

// //part 2: using numebers to determine function to use, number to link to function, given as input by the user (pointing to a function)
// //will not work unless functions implemented, but bascically by having pointers, the exact function can be called by just indicating a number
// //functions in the same pointer array must have the same argument and return types
// int main (){
//    int array[10] = {1,2,3,4,5,6,7,8,9,10};
//    char input;
//    printf("Please enter a number: \n");
//    scanf("%s", &input);
 
//    int user_input = atoi(&input);
 
//    printf("User input is %d \n", user_input);
//    // select a function based on user input
//    function_pointers[user_input](array, 10);
 
//    return 0;
// }

//part 3: passing function pointer as an argument to another function
void func(int (*f)(int *, int), int *array)
{
   for (int ctr = 0; ctr < 5; ctr++)
   {
       printf("Sum is : %d \n", (*f)(array, ctr));
   }
}


int main(){
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   func(sum_function_pointer, array);
   func(min_function_pointer, array);
}