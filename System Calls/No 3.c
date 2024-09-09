//Write a C program to check whether the sizes of the files created in (No1) and (No2) are same or not.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){
  int fd1,fd2;
  char a=0,b=0;
  fd1=open("text1.txt",O_RDONLY);
  fd2=open("text2.txt",O_RDONLY);
  a=lseek(fd1,0,SEEK_END);
  b=lseek(fd2,0,SEEK_END);
  if(a==b){
  printf("Length of Both text file are same\n");
  }
  else{
  printf("Length of Both text file are not same\n");
  }
}
