#include<stdio.h>
int main(){
	int n,f,m,l,sum;
	printf("enter the number :");
	scanf("%d",&n);
	l=n%10;
	m=n/10%10;
	f=n/100;
	sum=f+l+m;
	printf("SUM IS %d",sum);
}
