#include <stdio.h>


int main(){
  int n;
  scanf("%d", &n);
  int n2 = n;
  for (int i = 1 ; i <= n; i ++){
      for (int j = 0; j < n2; j++){
        putchar(' ');
  }
      for (int k = 0; k < 2*i - 1; k++){
        putchar('*');
      }
      printf("\n");
      n2--;
  }
  return 0;
}
