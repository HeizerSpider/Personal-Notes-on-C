#include "file.h"

//file read
int main(int argc, char** argv){
   if (argc < 2)
   {
       printf("Please key in filename\n");
       return 0;
   }

   //open the file, with flag of O_RDONLY if you only want to read
   int fd = open(argv[1], O_RDONLY);
 
   //error checking
   if (fd < 0)
   {
       perror("Failed to open file. \n");
       exit(1);
   }

  //initiallize a character array to contain what you will read later
   char char_buffer[128];
 
   //byte offset
   int byte = 0;
 
   //read 1 byte by 1 byte, put it into the buffer
   int check_read = read(fd, char_buffer + byte, 1);
 
   //keep reading 1 byte until nothing else to read
   while (check_read > 0)
   {
       byte++;
       check_read = read(fd, char_buffer + byte, 1);
   }

   printf("Called read() system call.  %d bytes  were read.\n", byte);
 
   //add terminating character so that you can print it
   char_buffer[byte] = '\0';
 
   printf("Those bytes are as follows: %s \n", char_buffer);
 
   //close the file
   close(fd);
}

//file write
   if (argc < 3)
   {
       printf("Please key in filename\n");
       return 0;
   }
   int fd2 = open(argv[2], O_RDWR|O_CREAT, 0666);
   char sentence_to_write[128] = "Hello, test writing to file \n";
 
   int check_write = write(fd2, sentence_to_write, strlen(sentence_to_write));
 
   //error checking
   if (check_write < 0){
       perror("Failed to write \n");
       exit(1);
   }
  
   close(fd2);

   //O_TRUNC to clear file as soon as it is opened
   //O_APPEND to append to file

   //fopen and fprintf can also be used to print to file
