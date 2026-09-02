#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b);
	printf("NUMBER BEFORE SWAPPING %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nNUMBER AFTER SWAPPING %d %d",a,b);
}
