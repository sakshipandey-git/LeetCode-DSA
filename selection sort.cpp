//selection_sort
#include<stdio.h>
void selectionsort(int arr[],int n){
	int i,j,min;
	for(i=0;i<n-2;i++){
		min=i;
		for (j=i;j<n-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}}
			int temp = arr[i];
             arr[i] = arr[min];
             arr[min] = temp;
	}
	for( i=0;i<n;i++){
		printf(" %d",arr[i]);
		
	}
}
int main(){
	int n;
	printf("enter size of element :");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		printf("enter elements:");
		scanf("%d",&arr[i]);
	}
	selectionsort(arr,n);
}
