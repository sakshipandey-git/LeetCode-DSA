#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(){
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if (newnode==NULL){
		printf("MEMORY ALLOCATION FAILED\n");
		return;
	}
	printf("ENTER THE ELEMENT:");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=top;
	top=newnode;	
}
void pop(){
	struct node *temp;
	if(top==NULL){
		printf("STACK IS EMPTY\n");
	}
	else{
		temp=top;
		printf("DELETED ELEMENT SHOULD BE:%d\n",top->data);
		top=top->next;
		free(temp);
	}
}
void peek(){
	if(top==NULL){
		printf("STACK IS EMPTY\n");
	}
	else {
		printf("THE TOP ELEMENT WILL BE %d\n",top->data);
	}
}
void display(){
	struct node *temp;
	if (top==NULL){
		printf("STACK IS EMPTY\n");
	}
	else{
		temp=top;
		printf("STACK ELEMENTS:\n");
		while(temp!=NULL){
				printf("%d\n",temp->data);
				temp=temp->next;
		}
	}
}
void count(){
	int count;
	struct node *temp=top;
	while (temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("TOTAL NUMBER OF ELEMENTS ARE:%d",count);
}
void empty(){
	if (top==NULL){
		printf("STACK IS EMPTY\n");
	}
	else {
		printf("STACK IS NOT EMPTY\n");
	}
}
int main(){
	int choice;
	do{
		printf("STACK IMPLEMENTATION USING LINKED LIST\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.Display\n");
		printf("5.Count\n");
		printf("6.Empty\n");
		printf("7.EXIT THE PROGRAM\n");
		printf("Enter your choice:");
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
				printf("EXIT THE PROGRAM");
				break;
			default :
				printf("INVALID CHOICE");
		}
	}while(choice!=7);
	return 0;
}

