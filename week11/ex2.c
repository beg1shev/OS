#include <stdio.h>
#include<unistd.h>

int main() {
	int buffer = 5;
	setvbuf(stdout, NULL, _IOFBF, buffer);
	
	printf("H");
    	sleep(1);
    	printf("e");
    	sleep(1);
    	printf("l");
    	sleep(1);
    	printf("l");
    	sleep(1);
    	printf("o");
	sleep(1);
	
	return 0;
}
