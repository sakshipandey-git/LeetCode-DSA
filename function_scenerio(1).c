#include <stdio.h>
void loanCheck(int age, float salary){

if (age<21){
	printf("NOT ELIGIBLE");
}
else if (age>60){
	printf("NOT ELIGIBLE(TOO OLD)");
}
else if (salary<1500){
	printf("NOT ELIGIBLE(LOW SALARY)");
}
else{
	printf("ELIGIBLE FOR LOAN");
}
}
int main(){
	int a;
	float s;
	printf("enter age and salary :");
	scanf("%d %f",&a,&s);
	loanCheck(a,s);
}

