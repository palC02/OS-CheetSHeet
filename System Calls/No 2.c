//Write a C program by using the system calls to make a copy of the text file created in (No1).

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){
  int fd,fd2;
  int rd=0,wr=0;
  char buff[60];
  fd=open("text1.txt",O_RDONLY,0777);
  fd2=creat("text2.txt",0777);
  fd2=open("text2.txt",O_WRONLY);
  if(fd==-1){
  printf("No File Exist\n");
  }
  rd=read(fd,buff,60);
  if(rd==-1){
  printf("No such thing to read\n");
  }
  else{
  wr=write(fd2,buff,60);
  if(wr==-1){
  printf("Writing Unsuccessful\n");
  }
  else{
  printf("Writing Successful\n");
  }
  }
close(fd);
close(fd2);
}
