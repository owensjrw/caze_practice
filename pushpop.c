#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int value;
	ll_node_st *next;
} ll_node_st;

void push(int n, ll_node_st **head) {
  ll_node_st *element = malloc(sizeof *element);
  element->value = n;
  element->next = *head;
  *head = element;
}

int pop(ll_node_st **head) {
  ll_node_st *relement = *head;
  int rdata = relement->value;
  *head = relement->next;
  free(relement);
  return rdata;
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
