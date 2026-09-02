#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int low,int high){
	int pivot=arr[low];
	int i=low;
	int j=high;
	while(i<j){
		while (arr[i]<=pivot && i<high){
		    i++;
			}
		while (arr[j]>pivot){
			j--;
		}
		if (i<j){
			swap(&arr[i],&arr[j]);
			i++;
			j--;	
	}
	swap(&arr[low],&arr[j]);
	return j;
}
}
void quicksort(int arr[],int low,int high){
	if(low<high){
		int p=partition(arr,low,high);
		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);
	}
}
int main(){
	int n,i;
	printf("ENTER NUMBER OF STUDENTS:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("ENTER MARKS:");
		scanf("%d",&arr[i]);
	} 
    quicksort(arr,0,n-1);
     printf("AFTER SORTING:");
      for(i=n-1;i>=0;i--){
      	printf("%d ",arr[i]);
	  }

	
}
