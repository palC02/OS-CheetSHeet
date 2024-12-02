#include<stdio.h>
#include<omp.h>

int main(){
  int m,k;

  omp_set_num_threads(3);
  #pragma omp parallel
  printf("Hi\n");
}
