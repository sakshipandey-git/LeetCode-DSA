#include<stdio.h>
int main(){
	int a,b,c,d,max;
	printf("Enter four numbers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	max=(a>b)?a:b;
	max=(max>c)?max:c;
	max=(max>d)?max:d;
	printf("MAXIMUM NUMBER IS %d",max);
}
