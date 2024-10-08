#include<stdio.h>
int main()
{
int size,i,x,n;
    i=0;
	printf("enter size of array");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		printf("enter any number:");
		scanf("%d",&n);
		arr[i]=n;
	}
	for(x=size-1;x>=0;x--)
	{
		printf(" %d ",arr[x]);
	}
		return 0;
    
}
