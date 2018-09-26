#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include<sys/wait.h> 

int main(void) {

  int arr[2];
  int btread;
  pid_t pid;
  pipe(arr);
  char str[] = "Some text\n";
  char emp[1000];
  pid = fork();

  if (pid == -1){
    perror("Error");
    exit(0);
  }
  else if (pid > 0){
    close (arr[0]);
    write(arr[1], str, (strlen(str)+1));
    close(arr[1]);
    wait(NULL);
  }
  else {
    close(arr[1]);
    btread = read(arr[0], emp, 1000);
    printf("%s", emp);
    close(arr[0]);
    exit(0);
  }
}
