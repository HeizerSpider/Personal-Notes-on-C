//pointing to the beginning of an executable code

#include <stdio.h>
#include <stdlib.h>

// //part 1
// //declaring a function
// int sum(int* array, int size);

// //legal declaration and initialization of pointer to a function
// int (*sum_function_pointer)(int*, int) = &sum;

// //part 2
// //declaration of function
int sum(int* array, int size);
// int geometric_sum(int* array, int size);
int min(int* array, int size);
// int max(int* array, int size);
// int stdev(int* array, int size);
// int average(int* array, int size);
 
// //legal declaration and initialization of pointer to function
// int (*function_pointers[])(int*, int) = {
   // &sum, //index 0
//    &geometric_sum, //index 1
   // &min, //index 2
//    &max, //index 3
//    &stdev, // index 4
//    &average //index 5
// };

//part 3:
int (*sum_function_pointer)(int*, int) = &sum;
// int (*min_function_pointer)(int*, int) = &min;
void func (int (*f)(int*, int), int* array);
