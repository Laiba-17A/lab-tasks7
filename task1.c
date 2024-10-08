#include<stdio.h>
int main(){
	int n;
	int size;
	printf("enter size of array");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elements of array");
	int i;
	for( i=0;i<size;i++){
		scanf("%d",&n);
		arr[i]=n;
	}
	int a;
	int sum=0;
	for(a=0;a<size;a++){
		sum=sum+arr[a];
	}
	printf("output: %d",sum);
    return 0;
}


