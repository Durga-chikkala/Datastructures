#include<stdio.h>
bubblesort(int arr[],int n)
{
	int i,temp,j;
	int flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}
main()
{
	int i;
	int arr[10]={2,3,1,5,4,7,6};
	bubblesort(arr,7);
	for(i=0;i<7;i++)
	{
		printf("%d",arr[i]);
	}
}
