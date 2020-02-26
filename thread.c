#include "thread.h"

int main(int arc, char** argv){
   pthread_t tid;
   Vec2D point;
   point.x = 1;
   point.y = 2;
   point.id = 0;
   int thread_error_check = pthread_create(&tid, NULL, functionForThread, &point);
 
   //check error
   if (thread_error_check != 0)
   {
       perror("Failed to create thread. \n");
       exit(1);
   }

   printf("Main thread is waiting...\n");
   void* threadReturn = NULL;
   thread_error_check = pthread_join(tid, &threadReturn);
 
   if (thread_error_check != 0)
   {
       perror("Failed to join. \n");
       exit(1);
   }
 
   //cast it to Vec2D pointer type
   Vec2D *threadReturnPointerCasted = (Vec2D *)threadReturn;
 
   //print its content
   printf("A thread has terminated. The return coordinate is %d, %d \n", threadReturnPointerCasted->x, threadReturnPointerCasted->y);
}