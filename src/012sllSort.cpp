/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
struct node *arrange(struct node *temp,int count,int num){
	int i = 0;
		while (i < count){
			temp->data = num;
			if (temp->next != NULL)
				temp = temp->next;
			else
				return temp;


			i++;
		}
		//temp->next = NULL;
		return temp;
}

void sll_012_sort(struct node *head){
	struct node *temp1=NULL, *temp = NULL;
	temp1 = head;
	int count0 = 0;
	int count1 = 0;
	int count2 = 0;
	while(temp1 != NULL) 
	{
		//temp = temp1->next;
		if (temp1->data == 0)
			count0++;
		else if (temp1->data == 1)
			count1++;
		else
			count2++;
		temp1 = temp1->next;
	}
	temp = head;
	temp = arrange(temp, count0,0);
	temp = arrange(temp, count1,1);
	temp = arrange(temp, count2,2);
	temp->next = NULL;
	
}