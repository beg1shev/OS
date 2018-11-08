#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <memory.h>


int main() {
	FILE *input = fopen("/dev/urandom", "r");
	char ch;
	for (int i=0;i<20;i++) {
		fread(&ch, 1, 1, input);
		if (ch > 0x20 && ch < 0x7e) {
			printf("%c", ch);
		}
		else {
			i--;
		}
	}
}
