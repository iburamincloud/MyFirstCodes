#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data=NULL;
	struct node *next=NULL;
};

struct node *top=NULL;
struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;



addstack(int value){ //this funtion adds nodes. Then links the nodes together for stack
	if(top==NULL){
		struct node *space=(struct node*)malloc(sizeof(struct node));
		space->data=value;
		space->next=NULL;
		top=space;
	}
	else{
		struct node *space=(struct node*)malloc(sizeof(struct node));
		space->data=value;
		space->next=top;
		top=space;
	}
}

addnodequeue(int value){ //this funtion adds nodes. Then links the nodes together for queue
		if(head==NULL){
			struct node *space=(struct node*)malloc(sizeof(struct node));
			space->data=value;
			space->next=NULL;
			head=tail=space;
		}
		else{
			struct node *space=(struct node*)malloc(sizeof(struct node));
			space->data=value;
			space->next=NULL;
			tail->next=space;
			tail=space;
		}
	}
	printstackandqueue(){
		temp=head;
		printf("queue\n");
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;	
		}
		printf("\nstack\n");
		temp=top;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;	
		}
		
	}
	
	freeee(){ 
		while(temp!=NULL){
			struct node *bosaltilacak=temp;
			temp=temp->next;
			free(bosaltilacak);
		}
	}
	
	
	int main(){
		char a=NULL;
		while(1){
			printf("eleman eklemek ister misiniz?(y/n) yes or no?\n");
			a=getch();
			if(a=='y'){
				printf("deger girin:");
				int girilen;
				scanf("%d",&girilen);
				addnodequeue( girilen);
				addstack(girilen);
			}
			else if(a=='n'){
				break;
			}
			else{
				printf("hatali tuslama lutfen tekrar deneyin!\n");
			}
		}
		printstackandqueue();
		temp=head;
		freeee();
		temp=top;
		freeee();
		
		
		return 0;
	}
	//

