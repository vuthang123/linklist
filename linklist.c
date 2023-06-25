#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Node 
{
	uint32_t data;
	struct Node *next;
}Node;


void pritnf_node(Node *head)
{
	while(head->next)
	{
		printf("%d "head->da);
		head = head->next;
			
	}
}

int main()
{
	return 0;
}

























