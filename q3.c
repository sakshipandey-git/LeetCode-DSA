#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b);
	printf("NUMBER BEFORE SWAPPING %d %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nNUMBER AFTER SWAPPING %d %d",a,b);
	
}

