#include <stdio.h>
#include<stdlib.h>

int main(void) {
printf("%s", "Enter N: ");
int N;
scanf("%d", &N);
int *array = malloc(N);
for (int i = 0; i < N; i ++){
  array[i] = i;
}
for (int i = 0; i < N; i ++){
  printf("%d ", array[i]);
}
free(array);
}
