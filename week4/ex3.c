#include <stdio.h>
#include <stdlib.h>

void type_prompt(){
printf("Write a command: ");
}

void read_command(char *command) {
scanf("%s", command);
}

int main(void){ 
  char command[10];
  while  (1 > 0) {
	type_prompt();
	read_command(command);
	system(command);
  }	
  return 0;
}
