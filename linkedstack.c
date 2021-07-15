//implementation of stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=0;
push(int x)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
	
}
pop()
{
	struct node *temp;
	if(top==0)
	{
		printf("stack is empty");
	}
	else
	{
		temp=top;
		top=temp->next;
		free(temp);
	}
}
display()
{
	struct node *temp;
	temp=top;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
main(){


	push(5);
	push(19);
	push(3);
	pop();
	display();
}
