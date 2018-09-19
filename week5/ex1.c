#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 



void *thread(void *var){

  int *number = (int *)var;

  printf("Thread Number: %d\n Some text\n", *number);

}

int main(){
  int num;
  scanf("%d", &num);
  pthread_t thread_id[num];

  for (int i = 0; i < num; i ++){pthread_create(&thread_id[i], NULL,thread, (void *)&thread_id[i]);
 }
  for (int i = 0; i < num; i ++){  
	pthread_join(thread_id[i], NULL);
}

  pthread_t thread_id2;
  for (int i = 0; i < num; i ++){
    pthread_create(&thread_id2, NULL,thread, (void *)&thread_id2);
    pthread_join(thread_id2, NULL);
  }

  pthread_exit(NULL);
  return 0;
}
