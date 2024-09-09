//Write a C program by using C system calls to display the contents of a text file. If the text file does not exist then creat it with 0 length.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){
int fd;
char buff[60];
fd=open("text1.txt",O_RDONLY);
if(fd==-1){
printf("No File Exist\n");
fd=creat("text1.txt",0777);
}
else{
printf("Display: %d\n",fd);
}
close(fd);
}
