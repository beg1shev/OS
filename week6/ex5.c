#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#define TRUE 1

int main(){
  pid_t pid;
  pid = fork();
  if (pid < 0){
    printf("Error\n");
    exit(EXIT_FAILURE);
  }
  else if (pid == 0){
    while (TRUE){
      printf("I'm alive\n");
      sleep(1);
    }
    exit(EXIT_SUCCESS);
  }
  else{
    sleep(10);
    kill(pid, SIGTERM);
    exit(EXIT_SUCCESS);
  }
  return 0;
}
