// #pragma omp critical

#include<stdio.h>
#include<omp.h>

int x=5;

first(){
#pragma omp critical
{
x++;
printf("\nx=%d from first");
}
}

second(){
#pragma omp critical
{
x--;
printf("\nx=%d from second");
}
}

int main(){
  #pragma omp parallel sections
{
    #pragma omp section
      first();
    #pragma omp section
      second();
}
printf("\nx=%d at end",x);
}
