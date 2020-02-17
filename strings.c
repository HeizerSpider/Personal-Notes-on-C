#include "cclass.h"

int main(int argc, char** argv){
    char hello_world[12]= {'h','e','l','l','o',' ','w','o','r','l','d', '\0'};
    printf("%s\n",hello_world);

    //strings are none other than an array of characters
    // \0 is a null terminated character

    char *hello_world_readonly = "hello world";
    printf("%s\n", hello_world_readonly);
    printf("Size of hello_world_better pointer %d\n", sizeof(hello_world_readonly));
    // stored in Read Onlt memory

    char hello_world_init[] = "hello world";
    //change the letter in the string
    hello_world_init[1] = 'u';
    printf("The new string is %s\n", hello_world_init);  

    //using [] allows it to be modifiable during runtime

    //other ways to initalize a string
    char sentence[BUFFERSIZE] = "";
    sprintf(sentence, "Hello World");
    printf("The sentence is: %s \n", sentence);
    sprintf(sentence, "This is another sentence overwriting the previous one. Lets write a number %d. ", 5);
    printf("The sentence now is modified to: %s \n", sentence);
    //sprintf 'prints' strings into a 'variable', in this case that would be 'sentence'

    //concatenate 2 strings

    char newsentence[64]="Hi concatenate me pls";
    strcat(sentence,newsentence);
    printf("%s \n", sentence);
}