//Implementing  lseek...

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>

int main(){
  int n,f;
  char buff[10];
  f=open("lseek.text",O_RDWR|O_CREAT);
  read(f,buff,10);
  write(1,buff,10);
  lseek(f,5,SEEK_SET);
  read(f,buff,10);
  write(1,buff,10);
  return 0;
}
