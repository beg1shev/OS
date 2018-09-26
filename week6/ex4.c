#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h> 
#define TRUE 1


void signhandler(int);
int main(void) {
  signal(SIGKILL, signhandler);
  signal(SIGSTOP, signhandler);
  signal(SIGUSR1, signhandler);
  while (TRUE){
    sleep (1);
  }
  return 0;
}

void signhandler (int signal){
  if (signal == SIGKILL){
    printf("%s", "SIGKILL signal is found");
    exit (1);
  }   
    if (signal == SIGSTOP){
    printf("%s", "SIGSTOP signal is found");
    exit (1);
  }   
  if (signal == SIGUSR1){
    printf("%s", "SIGUSR1 signal is found");

    kill (getpid(), SIGUSR1);
  }   
}

