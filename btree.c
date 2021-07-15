#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
create(){
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data(-1 for no node)");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	else{
		newnode->data=x;
		printf("enter left child of %d",x);
		newnode->left=create();
		printf("enter right child of %d",x);
		newnode->right=create();
	}
	return newnode;
}
preorder(struct node *root)
{
	if(root==0)
	{
		return ;
	}
	else
	{
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
inorder(struct node *root)
{
	if(root==0)
	{
		return ;
	}
	else{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
postorder(struct node *root)
{
	if(root==0)
	{
		return ;
	}
	else{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}
main()
{
	struct node *root;
	root=create();
	preorder(root);
	inorder(root);
	postorder(root);
}
