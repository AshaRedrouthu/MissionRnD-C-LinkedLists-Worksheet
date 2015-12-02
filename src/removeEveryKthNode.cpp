/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL||K<=0)
	   return NULL;
	struct node *temp=NULL,*ptr=NULL,*preptr=NULL;
	ptr = head, preptr = head;
	if (K > 0){
		while (ptr != NULL){
			int i = 1;
			while (i < K&&ptr!=NULL){
				preptr = ptr;
				ptr = ptr->next;
				i++;
			}
			if (ptr != NULL){
				if (K == 1)
					preptr = ptr->next;
				else
					preptr->next = ptr->next;
				delete ptr;
				ptr = preptr->next;
			}
		}
	}
	if (K == 1)
		return NULL;
	return head;

	}
