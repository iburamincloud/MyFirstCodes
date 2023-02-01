#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	struct node{
		int data=NULL;
		struct node *next=NULL;
	
	};
	struct node *head=NULL;
	struct node *tail=NULL;
	
	addnode(int value){ //this funtion adds nodes. Then links the nodes together
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
	
	int main(){
		
		//liste doldurma // filling the list.
		while(1){
			int alinan=0;
			char a;
			printf("listeye eleman eklemek istiyor musunuz?(y/n) ");
			a=getch();
			if(a=='y'){
				printf("eleman girin. ");
				scanf("%d",&alinan);
				addnode(alinan);
			}
			else{
				break;
			}
		}
		//listeyi okuyup ekrana bastirma // reading the list and pressing the screen
		printf("\nliste elemanlari:");
		struct node *gecici=head;
		while(gecici!=NULL){
			printf("%d ",gecici->data);
			gecici=gecici->next;
		}
		gecici=head;
		while(gecici!=NULL){
			struct node *bosaltilacak=gecici;
			gecici=gecici->next;
			free(bosaltilacak);
		}
		return 0;
	}



