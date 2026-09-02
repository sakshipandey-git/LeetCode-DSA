#include<stdio.h>
int main(){
	int n;
	printf("Enter a year:");
	scanf("%d",&n);
	((n%400==0) || (n%4==0 && n%100!=0))?printf(" %d IS LEAP YEAR ",n):printf("%d IS NOT A LEAP YEAR",n);
}

