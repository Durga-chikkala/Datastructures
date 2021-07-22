#include<stdio.h>
#include<string.h>
int arr[10];
int top=-1;
push(int x)
{
	top++;
	arr[top]=x;
}
peek()
{
	printf("%d",arr[top]);
}
pop()
{
	top--;
	
}
main()
{
	int len,i;
	char stat[10];
	printf("Enter your Statement");
	gets(stat);
	len=strlen(stat);
    for(i=0;i<len;i++)
    {
    	if(stat[i]=='{')
    	{
    		push('{');
		}
		else if(stat[i]=='}'){
			pop();
		}
		
	}
	if(top==-1)
	{
		printf("balanced");
	}
	else{
		if(arr[top]="{") 
		{
		printf("please close the bracket");
	}
		else 
		{
			printf("openning is not present");
		}
	}
}
