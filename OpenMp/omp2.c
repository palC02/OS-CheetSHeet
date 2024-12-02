// #pragma omp parallel for reduction (+: list of variables)

#include<stdio.h>
#include<omp.h>

int main(){
  int i,sum=0;
  int A[10]={1,2,3,4,5,6,7,8,9,10};
  #pragma omp parallel form reduction (+:sum)
  for(i=0;i<10;i++){
    sum=sum+A[i];
    printf("\nThe sum of all the array elements are %d", sum);
  }
}
