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
int sayac=1;



addstack(int value){
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

addnodequeue(int value){
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
	
del(int value,char a){ //delete the node.
	struct node *silinecek;
	while(sayac<=value){
		if(value==1){
			if(a=='s'){
				top=top->next;
			}
			else{
				head=head->next;
			}
			free(temp);
			printf("silindi");
			break;
		}
		else if(sayac==value-1){
			silinecek=temp->next;
			temp->next=temp->next->next;
			free(silinecek);
			sayac=1;
			printf("silindi");
			break;
		}
		else{
			temp=temp->next;
			sayac++;
		}
	}
}
del2(int value){ //delete the node.
	struct node *silinecek;
	while(sayac<=value){
		if(value==1){
			head=head->next;
			free(temp);
			printf("silindi");
			break;
		}
		else if(sayac==value-1){
			silinecek=temp->next;
			temp->next=temp->next->next;
			free(silinecek);
			sayac=1;
			printf("silindi");
			break;
		}
		else{
			temp=temp->next;
			sayac++;
		}
	}
}
	
	find(int value){ // finds node
		while(sayac<=value){
			if(sayac==value){
				printf("%d. eleman %d dir.",value,temp->data);
				sayac=1;
				break;
			}
			temp=temp->next;
			sayac++;
		}
	}
	
	
	
	int main(){
		
		char answer;
		printf("hangi yapida liste olusturulsun? stack(s) or queue(q)");
		while(1){
			answer=getch();
			if(answer=='s'){
				while(1){
					printf("\nyapmak istediginiz islemi secin.\n1. eleman ekle\n2.bul ve sil\n3.bul ve goster\n4.tumunu listele\n");
					answer=getch();
					if(answer=='1'){
						int eleman;
						printf("eleman girin:");
						scanf("%d",&eleman);
						addstack(eleman);
					}
					else if(answer=='2'){
						int eleman;
						printf("hangi eleman silinsin:");
						scanf("%d",&eleman);
						temp=top;
						del(eleman,'s');
					}
					else if(answer=='3'){
						int eleman;
						printf("hangi eleman bulunsun:");
						scanf("%d",&eleman);
						temp=top;
						find(eleman);
					}
					else if(answer=='4'){
						printstackandqueue();
						
					}
					else{
						printf("\nhatali islem tekrar dene!");
					}
				}
			}
			else if(answer=='q'){
				while(1){
					printf("\nyapmak istediginiz islemi secin.\n1. eleman ekle\n2.bul ve sil\n3.bul ve goster\n4.tumunu listele\n");
					answer=getch();
					if(answer=='1'){
						int eleman;
						printf("\neleman girin:");
						scanf("%d",&eleman);
						addnodequeue(eleman);
					}
					else if(answer=='2'){
						int eleman;
						printf("hangi eleman silinsin:");
						scanf("%d",&eleman);
						temp=head;
						del(eleman,'q');
					}
					else if(answer=='3'){
						int eleman;
						printf("hangi eleman bulunsun:");
						scanf("%d",&eleman);
						temp=head;
						find(eleman);
					}
					else if(answer=='4'){
						printstackandqueue();
						
					}
					else{
						printf("\nhatali islem tekrar dene!");
					}
			}	
		}
		else{
				printf("\nhatali tuslama tekrar deneyin!");
			}
		
	}
	temp=head;
	freeee();
	temp=top;
	freeee();
	return 0;
}
