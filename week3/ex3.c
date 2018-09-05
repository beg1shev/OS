#include <stdio.h>
#include<stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

void insert_node(struct Node** head, int value){
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  struct Node *last = *head;
  
  new_node->value = value;
  new_node->next = NULL;

  if (*head == NULL){
    *head = new_node;
    return;
  }
  while (last->next != NULL){
    last = last->next;
  }
  last->next = new_node;
  return;
}

void delete_node(struct Node** head, int del_key){
  struct Node* cursor = *head;
  if (cursor != NULL && cursor->value == del_key){
    *head = cursor->next;
    free(cursor);
    return;
  }

  while (cursor != NULL && cursor->next->value != del_key ){
    if (cursor->next != NULL){
    cursor = cursor->next;
    }
    else printf("Cannot find the node before the node for deleting");
  } 
  struct Node* del_node = (struct Node*)malloc(sizeof(struct Node));

  del_node = cursor->next;
  cursor->next = del_node->next;
  free(del_node);
}

void print_list(struct Node *n){
  while (n != NULL){
    printf(" %d ", n->value);
    n = n->next;
  }
}

int main(){
  struct Node* head = NULL;
  insert_node(&head, 5);
  insert_node(&head, 8);
  insert_node(&head, 2);
  insert_node(&head, 16);
  print_list(head);
  delete_node(&head, 2);
  printf("\n");
  print_list(head);
  delete_node(&head, 5);
  printf("\n");
  print_list(head);

  return 0;
}





