#include<stdio.h>
int main(){
	int a,b,remainder;
	printf("ENTER THE TWO NUMBERS:");
	scanf("%d %d",&a,&b);
	remainder=a%b;
	printf("Remainder is %d",remainder);
}
