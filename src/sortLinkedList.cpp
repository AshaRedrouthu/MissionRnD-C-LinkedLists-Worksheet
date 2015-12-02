/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head==NULL)
	return NULL;
	else{
		int i = 0;
		struct node *ptr = NULL, *preptr = NULL;
		ptr = head;
		preptr = head;
		while (ptr->next != NULL){
			if (ptr->num < preptr->num){
				preptr->next = ptr->next;
				ptr->next = preptr;
				if (i == 0)
					head = ptr;
			}
			i++;
			preptr = ptr;
			ptr = ptr->next;
		}
	}
	return head;
}