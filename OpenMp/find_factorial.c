#include<stdio.h>
#include<omp.h>

int main(){
  int i,f=1,n=5;
  #pragma omp parallel for shared(n) private(i) reduction(*:f)
  for(i=1;i<=n;i++){
    f=f*i;
  }
printf("\n Fcatorial is %d", f);
return 0;
}
