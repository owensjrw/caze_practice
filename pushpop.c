#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *next;
} ll_node_st;

void push(int n, ll_node_st **head) {
  ll_node_st *element /*make a pointer named element of ll_node_st type*/ =
    /* create memory size ll_node_st casted as a pointer of type ll_node_st */
                      (ll_node_st *) malloc(sizeof(ll_node_st));
                      // Now have a pointer to a pointer

  //Insert the data to the new struct at memory starting where element points
  element->value = n;

  //Connect linked list
  element->next = *head;

  //Change current head reference
  *head = element;
}

int pop(ll_node_st **head) {
  //Get current head of linked list
  ll_node_st *relement = *head;

  //Get data to return
  int rdata = relement->value;

  //Change current head reference
  *head = relement->next;

  //return data
  return rdata;

  //Free (delete, pop)
  free(relement);
}

int main(void) {
	ll_node_st *head = NULL;

	push(1, &head);
	push(2, &head);
	push(3, &head);
	printf("%d\n", pop(&head));
	printf("%d\n", pop(&head));
	printf("%d\n", pop(&head));

	return 0;
}
