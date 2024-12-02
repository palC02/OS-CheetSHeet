#include<stdio.h>
#include<omp.h>

int main(){
  int p,m;
  p=omp_get_num_procs();
  m=omp_get_max_threads();
  printf("The Number of Processors = %d, The Maximum Number of Threads= %d", p,m);
  return 0;
}
