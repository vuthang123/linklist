#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define ELEMENT_QUEUE 100

typedef uint32_t Type_queue; 


typedef struct 
{
	uint32_t rear;
	uint32_t front;
	uint32_t size;
	Type_queue Queue[ELEMENT_QUEUE];
	
}Queue_circular;

void printf_queue(Queue_circular* Queue)

{
	uint32_t index = Queue->front;
	uint32_t count = 0

	while(index < Queue->size)
	{
		printf("%d ", Queue->front);
		index = (index +1) % ELEMENT_QUEUE;
		count++;
	}
	printf("/n");

}
int main()
{
	return 0;
}
