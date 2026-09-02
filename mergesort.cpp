#include<stdio.h>
void merge(int arr[],int low, int mid,int high){
	int i=low;
	int j=mid+1;
	int k=0;
	int temp[1000];
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
			i++;
		}
		else {
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
	while (i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}
	while (j<=high){
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(i=low,k=0;i<=high;i++,k++){
		arr[i]=temp[k];
	}
}
void mergesort(int arr[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main(){
	int n,i;
	printf("ENTER NUMBER OF STUDENTS:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("ENTER INFO:");
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n-1);
	 printf("AFTER SORTING:");
      for(i=n-1;i>=0;i--){
      	printf("%d ",arr[i]);
	  } 
}
