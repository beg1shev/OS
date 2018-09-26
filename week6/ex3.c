#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h> 
#define TRUE 1


void signhandler(int);
int main(void) {
  signal(SIGINT, signhandler);
  while (TRUE){
    sleep (1);
  }
  return 0;
}

void signhandler (int signal){
  if (signal == SIGINT){
    printf("%s", "signal is found");
    exit (1);
  }   
}

