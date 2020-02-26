#include <stdlib.h>
#include <stdio.h>

int main (int argc, char** argv){

//argc is the number of arguments supplied in the commandline
    if(argc < 2){
        printf("Please supply arguments! \n");
    }

//argv is a double character pointer, where argv[i] points to the start of the ith argument
    for (int i=0;i<argc; i++){
        printf("Argument %d is: %s \n", i, argv[i]);
    }
}