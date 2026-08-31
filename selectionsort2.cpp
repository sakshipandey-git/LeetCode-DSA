//selection_sort
#include<stdio.h>
void selectionsort(int arr[],int n){
	int i,j,max;
	for(i=0;i<n-1;i++){
		max=i;
		for (j=i;j<n;j++){
			if(arr[j]>arr[max]){
				max=j;
			}}
			int temp = arr[i];
             arr[i] = arr[max];
             arr[max] = temp;
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

