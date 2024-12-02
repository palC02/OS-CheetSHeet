//Write an OpemMp program to define three integer arrays A,B and C of the same sizes.
// The Program should computer parallelaly
//A[i]=B[i]+C[i]; for all i's

#include<stdio.h>
#include<omp.h>

int main(){
  int B[5]={1,2,3,4,5},i,m;
  int C[5]={2,3,4,5,6},j;
  int A[5];

  omp_set_dynamic(0);
  m=omp_get_num_processors();
  omp_set_num_threads(m);
  #pragma omp parallel for shared(A) shared(B) shared(C) private(i)
  for(i=0;i<5;i++){
    A[i}=B[i]+C[i];
    printf("\nA[%d] = %d from thread %d of %d", i, A[i], omp_get_thread_num(), omp_get_num_threads());
  }
}
