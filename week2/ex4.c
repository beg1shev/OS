#include <stdio.h>

void swap (int *x, int *y){
  int p;
  p = *x;
  *x = *y;
  *y = p;
}

int main(){
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  swap(&a, &b);
  printf("%d ", a);
  printf("%d", b);
  return 0;
}

