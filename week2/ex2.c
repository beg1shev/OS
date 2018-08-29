#include <stdio.h>
#include <limits.h>
#include<string.h>

int main(){
  char str[10000];
  fgets(str, 10000, stdin);
  for (int i = strlen(str); i >= 0; i --){
    putchar(str[i]);
  }
  return 0;
}
