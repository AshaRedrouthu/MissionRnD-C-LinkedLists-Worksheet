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
		preptr = head;
		while (preptr != NULL){
			ptr = preptr->next;
			while (ptr != NULL){
				if (ptr->num < preptr->num){
					int a = ptr->num;
					ptr->num = preptr->num;
					preptr->num = a;
				}
				ptr = ptr->next;
			}
			preptr = preptr->next;
		}
		
	}
	return head;
}