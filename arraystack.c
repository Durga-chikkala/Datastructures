//implementation of stack using array
#include<stdio.h>
#define N 10
int top=-1;
int stack[N];
push()
{
	int x;
	printf("enter data:");
	scanf("%d",&x);
	if(top==N-1)
	{
		printf("stack is full");
	}
	else{
		top++;
		stack[top]=x;
	}
}
pop()
{
	if(top==-1){
		printf("stack is empty");
	}
	else{
		top--;
	}
}
peek()
{
	if(top==-1)
	{
		printf("stack is full");
	}
	else{
		printf("%d",stack[top]);
	}
}
display()
{
	int i;
	for(i=0;i<top;i++)
	{
		printf("%d",stack[i]);
	}
}
main()
{
	push();
	push();
	push();
	pop();
	peek();
	display();
}
