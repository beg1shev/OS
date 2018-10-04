  #include <stdlib.h>
  #include <stdio.h>

  void *reallocate(int* ptr,int size1, int size2){

    int *ptr2;
    if (ptr == NULL){
      ptr2 = malloc(size2);
      return ptr2;  
    }
    else if(size2 == 0){
      free(ptr);
      return ptr;
    }
    else if (size1 < size2){
      ptr2 = malloc(size2);
      for (int i = 0; i < size1; i++){
        *(ptr2 + i) = *(ptr + i);
      }
      return ptr2;
    }
    else if (size1 > size2){
      free(ptr);
      ptr2 = malloc(size2);
      for (int i = 0; i < size2; i++){
        *(ptr2 + i) = *(ptr + i);
      }
      
      return ptr2;

    }
  }
  int main(){
    int n = 10;
    int *arr = calloc(n, n*sizeof(int));
    
    for (int i = 0 ; i < n; i ++){
      *(arr + i) =  i;
      printf("%d ", *(arr + i));
    }
    printf("\n");
    int new_n = 7;
    arr = reallocate(arr, n, new_n);
    for (int i = 0 ; i < new_n; i ++){
      *(arr + i) = i ;
      printf("%d ", *(arr + i));
    }
    return 0;
  }

