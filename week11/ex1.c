#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void) {
int fd = open("ex1.txt", O_RDWR);

char *nice_str = "This is a nice day";

if (fd < 0){
  perror("Error");
  exit(EXIT_FAILURE);
};

ftruncate(fd, strlen(nice_str));

char *address = mmap(NULL, strlen(nice_str),PROT_READ | PROT_WRITE | PROT_EXEC, MAP_SHARED,fd, 0);
strcpy(address,"This is a nice day");
close(fd);
}
