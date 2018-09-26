#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include<sys/wait.h> 

int main(void) {

  int arr[2];
  int btread;
  pipe(arr);
  char str[] = "Some text\n";
  char emp[1000];
  write(arr[1], str, (strlen(str)+1));
  close(arr[1]);
  wait(NULL);
  btread = read(arr[0], emp, 1000);
  printf("%s", emp);
}
