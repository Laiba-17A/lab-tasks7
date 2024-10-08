#include<stdio.h>
int main(){
	int n;
	int arr[]={2,5,89,50,64,76,3,87,10,11};
	printf("enter any number to search ");
	scanf("%d",&n);
	int i;
	for (i=0;i<10;i++){
		if (n==arr[i]){
			printf("number found at index %d",i+1);
			return 0;
		}
	}
	printf("number not found");
    return 0;
}



