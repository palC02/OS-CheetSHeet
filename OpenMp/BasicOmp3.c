#include<stdio.h>
#include<omp.h>

int main(){
  int k,m;
  omp_set_dynamic(2);
  omp_set_num_threads(6);
  printf("Hi\n");
}
