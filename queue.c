#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
	uint32_t count = 0;

	while(index < Queue->size)
	{
		printf("%d ", Queue->front);
		index = (index +1) % ELEMENT_QUEUE;
		count++;
	}
	printf("/n");

}
bool isEmpty(Queue_circular* Queue)
{
	bool retval = false;
	if((Queue->front == Queue->rear) && (Queue->size == 0))
	{
		retval = true;
	}
	return retval;
}
bool IsFull(Queue_circular* Queue)
{
	bool retval = false;
	if((Queue->front == Queue->rear) && (Queue->size == ELEMENT_QUEUE))
	{
		retval = true;

	}
	return retval;
	
}

void Queue_push(Queue_circular* Queue,uint32_t data)
{
	bool a = isEmpty(Queue);
	if(!a)
	{
		Queue->Queue[Queue->rear] = data;
        Queue->rear= (Queue->rear + 1) % ELEMENT_QUEUE;
		Queue->size++;

	}
}
void Queue_pop(Queue_circular* Queue)
{
	bool a = isEmpty(Queue);
	if (!a)
	{
		Queue->front = (Queue->front + 1) % ELEMENT_QUEUE;
		Queue->size--;

	}
}
int main()
{
	Queue_circular queue;
	Queue_push(&queue,1);
	Queue_push(&queue,1);
	Queue_push(&queue,1);
	return 0;
}
