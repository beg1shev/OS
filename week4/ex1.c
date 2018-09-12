#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(){

  pid_t n;
  n = getpid();
  pid_t value ;
  pid_t pid = fork();
  
  if (pid == 0) {
    n = getpid();
    printf("Hello from child[%d - %d]\n",pid, n);
  }
  else if (pid == -1){
  printf("Error ");
  }
  else {
  printf("Hello from parent[%d - %d]\n",pid, n);
  }
}
