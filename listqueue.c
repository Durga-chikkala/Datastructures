//implementing queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=0;
struct node *rear=0;
enqueue(int x)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	if(front==0 &&rear==0)
	{
		front=rear=newnode;
		
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
}
display()
{
	struct node *temp;
	if(front==0 &&rear==0)
	{
		printf("queue is empty..");
	}
	else{
		temp=front;
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
dequeue()
{
	struct node *temp;
	if(front==0 &&rear==0)
	{
		printf("underflow condition..");
	}
	else{
		temp=front;
		front=front->next;
		free(temp);
	}
}
main()
{
	enqueue(5);
	enqueue(2);
	enqueue(1);
	enqueue(9);
	enqueue(8);
	enqueue(4);
	display();
	dequeue();
	printf("\n");
	display();
}
