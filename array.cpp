#include<stdio.h>
#include<stdlib.h>
#define max 100
int stack[max];
int top=-1;\
void push(){
	int x;
	if(top==max-1){
		printf("OVERFLOW\n");
	}
	else{
		printf("Enter the element:");\
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop(){
	if(top==-1){
		printf("UNDERFLOW\n");
	}
	else{
		printf("ELEMENT TO BE DELETED:%d\n",stack[top]);
		top--;
	}
}
void peek(){
	if (top==-1){
		printf("STACK IS EMPTY\n");
	}
	else{
		printf("THE TOP ELEMENT WILL BE:%d\n",stack[top]);
	}
}
void display(){
	int i;
	if (top==-1){
		printf("STACK IS EMPTY\n");
    }
    else{
    	printf("STACK ELEMENTS:\n");
    	for(i=top;i>=0;i--){
    		printf("%d\n",stack[i]);
		}
	}
}
void count(){
	printf("THE TOTAL NUMBER OF ELEMNTS ARE:%d\n",top+1);
}
void empty(){
	if(top==-1){
		printf("STACK IS EMPTY\n");
	}
	else{
		printf("STACK IS NOT EMPTY\n");
	}
}
void full(){
	if (top==max-1){
		printf("STACK IS FULL\n");
	}
	else{
		printf("STACK IS NOT FULL\n");
	}
}
int main(){
	int choice;
	do{
		printf("STACK IMPLEMENTATION USING ARRAY\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.Display\n");
		printf("5.Count\n");
		printf("6.Empty\n");
		printf("7.Full\n");
		printf("8.Exit\n");
		printf("ENTER YOUR CHOICE:");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				count();
				break;
			case 6:
				empty();
				break;
			case 7:
				full();
				break;
			case 8:
				printf("EXIT THE PROGRAM");
				break;
			default:
				printf("INVALID CHOICE");
		}
		
	}while(choice!=8);
	return 0;
}
