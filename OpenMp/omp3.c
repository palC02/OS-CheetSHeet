#include<stdio.h>
#include<omp.h>

int main(){
  #pragma omp sections
{
  #pragma omp section
    printf("\nFirst %d",omp_get_thread_num());
  #pragma omp section
    printf("\nSecond %d",omp_get_thread_num());
  #pragma omp section
    printf("\nThird %d",omp_get_thread_num());
}
}
