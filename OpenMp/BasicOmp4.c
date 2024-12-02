#include<stdio.h>
#include<omp.h>

int main(){
  int m,k;
  omp_set_dynamic(0);

  omp_set_num_threads(6);
  #pragma omp parallel
  printf("\nHi from %d out of %d",omp_get_thread_num(),omp_get_num_threads());
}
