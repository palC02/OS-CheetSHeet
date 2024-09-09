// Write a C Program by using the system call to create a new text file by accepting the text from the standard input.
#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

int main(){
  int fd;
  char buff;
  fd=open("text1.txt",O_RDONLY|O_CREAT);
  if(fd==-1){
  printf("Unsuccessful\n");
  }
  else{
  printf("Successful\n");
  }
  close(fd);
}
