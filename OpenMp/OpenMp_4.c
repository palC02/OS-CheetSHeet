/*A Case study - The Producer Consumer Probelm

1.There are two processes, the product and the consumer, who share a common, fixed size buffer used as a queue
2. The Producer's Job is to generate a piece of data, put it into the buffer and start again. At the same time, the consumeris removing the data from the buffer one
  piece at a time
3. The problem is to makesure that the producer won't try to add data into the buffer if it's full and that the consumer won't try to remove data from an empty buffer
4. The buffer queue is a share resource */

#include<stdio.h>
#include<omp.h>

int main(){
  int Q[100], front=0, rear=-1, cnt=0;
  int id,d,ins=0;

  omp_set_dynamic(0);
  #pragma omp parallel num_threads(2)
{
  id=omp_get_thread_num();
  if(id==0){ //producer
    while(1){
      #pragma omp critical
      {
        if(cnt<100){
          rear=(rear+1)%100;
          ins++; //producing the data
          Q[rear]=ins;
          printf("\nProducer %d",ins);
          cnt++;
        }
        else printf("\nProducer no space");
        fgetc(stdin);
     }
    }
  }
  else{
        while(1){ //consumer
          #pragma omp critical
          {
            if(cnt!=0){
              d=Q[front];
              front=(front+1)%100;
              printf("\nConsumer %d",d);
              cnt--;
            }
            else printf("\nConsumer no item");
            fgetc(stdin);
        }
        }
  }
}
}
