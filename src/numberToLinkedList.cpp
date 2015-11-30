/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	node *newnode,*start=NULL,*temp=NULL;
	if (N == 0){
		newnode = (struct node *)malloc(sizeof(node));
		newnode->num = N;
		newnode->next = NULL;
		start = newnode;
	}
	else{
		if (N < 0)
			N = -N;
		while (N >0){
			newnode = (struct node *)malloc(sizeof(node));
			int r = N % 10;
			newnode->num = r;
			if (start == NULL){
				newnode->next = NULL;
			}
			else{
				newnode->next = start;
			}
			start = newnode;
			N = N / 10;
		}
	}
	

	return start;
}