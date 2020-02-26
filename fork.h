//pid_t is a type

// https://www.csl.mtu.edu/cs4411.ck/www/NOTES/process/fork/create.html

#include <stdio.h>
#include <stdlib.h>


int child_process_function(int* array, int size, int id){
 
   printf("Hello from child number %d with pid %d!\n", id, getpid());
   int answer = 0;
   for (int i = 0; i<size; i++){
       answer += array[i];
       array[i] += 10;
   }
 
   printf("Answer is %d\n", answer);
   return answer;
 
}
