#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct Queue
{
	int r,f;
	int data[MAX];
}Queue;


void init(Queue *q)
{
	q->r=q->f=-1;
}

int isEmpty(Queue *q)
{
	if(q->r==q->f)
		return (1);
	return (0);
}

int isFull(Queue *q)
{
	if(q->r==MAX-1)
		return (1);
	return (0);
}

void add(Queue *q,int x)
{
	q->r=q->r+1;
	q->data[q->r]=x;
}

int delete(Queue *q)
{
	int x;
	q->f=q->f+1;
	x=q->data[q->f];
	return (x);
}

int peek(Queue *q)
{
	int p;
	if(q->f==-1)
		p=q->data[0];
	else if(q->f==q->r)
		return (-1);
	else
		p=q->data[q->f+1];
	return (p);
}
void main()
{
	int choice,x,p;
	Queue q;
	init(&q);
	do
	{
		printf("1: ADD\n2: DELETE\n3: PEEK\nEnter Zero(0) for exit\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to add in the Queue: ");
				scanf("%d",&x);
				if(!isFull(&q))
					add(&q,x);
				else
					printf("Queue is FULL\n");
			break;

			case 2:
				if(!isEmpty(&q))
				{
					p=delete(&q);
					printf("Element deleted from the Queue: %d\n",p);
				}
				else
					printf("Queue is EMPTY\n");
			break;

			case 3:
				p=peek(&q);
				if(p!=-1)
					printf("First element in the Queue: %d\n",p);
				else
					printf("Queue is EMPTY\n");
			break;
		}
	}while(choice!=0);
}