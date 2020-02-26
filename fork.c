#include "fork.h"

int main(int argc, char** argv){
   int forkReturnValue;
 
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
   pid_t myPID = getpid();
   printf("The main process id is %d \n", myPID);
 
   for (int i = 0; i < 5; i++)
   {
       forkReturnValue = fork();
 
       //error checking
       if (forkReturnValue < 0)
       {
           perror("Failed to fork. \n");
           exit(1);
       }
 
       //child process
       if (forkReturnValue == 0)
       {
           //child process will have forkReturnValue of 0
           child_process_function(array, 10, i);
           break; //dont create more children!
       }
   }
 
   //executed by parent process, since the forkReturnValue will retain the pid of the last child created
   if (forkReturnValue != 0)
   {
 
       while(wait(NULL) > 0); //wait for all children
       printf("Children processes has all finished. Main process exiting\n");
   }
 
   printf("The address of the array in pid %d starts at %p \n", getpid(), array);
   printf("The value of the array in pid %d is : ", getpid());
   for (int i = 0; i < 10; i++)
   {
       printf(" %d ", array[i]);
   }
   printf("\n");
}