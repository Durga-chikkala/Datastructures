#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int ncount=0;
struct node *head=0,*temp,*newnode;
create()
{
	int x,choice;
	do{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->next=0;
		printf("\nenter data");
		scanf("%d",&x);
		newnode->data=x;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	printf  ("\nenter 1 to add new element");
	scanf("%d",&choice);
		
	}while(choice==1);
}
display()
{
	temp=head;
	int count;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
count()
{
	temp=head;
	
	while(temp!=0)
	{
		ncount++;
		temp=temp->next;
	}
	printf("\nno of elements in linked list are %d\n",ncount);
}
insertatbeg(int x)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=head;
	newnode->data=x;
	head=newnode;
}
insertatend(int x)
{
	temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=0;
	newnode->data=x;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next=newnode;	
	
}
insertatpos(int x)
{
	int pos;
	printf("enter the position ");
	scanf("%d",&pos);
	if(pos==1)
	{
		insertatbeg(x);
	}
	else if(pos==ncount)
	{
		insertatend(x);
	}
	else{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->next=0;
		newnode->data=x;
		temp=head;
		int i=1;
		
	while(i<pos-1)
	{
		temp=temp->next;
	    i++;
	    
	}
	newnode->next=temp->next;
	temp->next=newnode;
	 
	}
}
deletefrombeg()
{
	temp=head;
	head=temp->next;
	free(temp);
}
deletefromend()

{
	
	struct node *last;
	temp=head;
	while(temp->next!=0);
	{   printf("hii");
		last=temp;
		temp=temp->next;
	}
	last->next=0;
	printf("hii");
	free(temp);
}
main()
{
	create();
	insertatbeg(6);
	display();
	printf("\n");
	insertatend(7);
	display();
	count();
	insertatpos(9);
	display();
	deletefrombeg();
	printf("\n");
	display();
	deletefromend();
	printf("\n");
	display();
}
