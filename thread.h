#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

//prepare an array of pthread_t (its thread id)
pthread_t tid;

void *functionForThread(void* args);

//A struct creation for example

typedef struct Coordinate{
   int x;
   int y;
   int id;
}Vec2D;

void *functionForThread(void *args)
{
 
   //cast the argument into Vec2D type, because we know thats what we fed in as argument in pthread_create
   Vec2D *myPoint_pointer = (Vec2D *)args;
 
   //accessing argument data through pointer
   printf("Hello from thread id %d! The coordinate passed is %d, %d \n",  myPoint_pointer->id, myPoint_pointer->x, myPoint_pointer->y);
 
   //sleep for 2 seconds
   sleep(2);
   //modify the argument
   myPoint_pointer->x = myPoint_pointer->x + 10;
   myPoint_pointer->y = myPoint_pointer->y + 10;
 
   //cast it back to void* as that’s what we are supposed to return 
   return (void*) myPoint_pointer;
}

