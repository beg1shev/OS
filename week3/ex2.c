#include <stdio.h>

void swap (int *a, int *b){
  int p;
  p = *a;
  *a = *b;
  *b = p;
}

void bubble_sort(int array[],int len){
  for (int i = 0; i < len; i++){
    for (int j = 0; j < len - i - 1; j++)
      if (array[j] > array[j + 1]){
          swap(&array[j], &array[j + 1]);
      }
  }
}

int main(){
  int *arr;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  bubble_sort(arr, n);
  for (int i = 0; i < n; i ++){
    printf("%d ", arr[i]);
  }
}

