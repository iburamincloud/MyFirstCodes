

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
    
};
struct node *head=NULL;
struct node *temp=NULL;
struct node *tail=NULL;
struct node *g=NULL;

void addlist(int value){
    if (head==NULL) {
        struct node *space=(struct node*)malloc(1*sizeof(struct node));
        head=tail=space;
        head->data=value;
        head->prev=NULL;
        head->next=NULL;
    }
    else{
        struct node *space=(struct node*)malloc(1*sizeof(struct node));
        space->data=value;
        space->next=NULL;
        tail->next=space;
        space->prev=tail;
        tail=space;
    }
}

void freee(){
    temp=head;
    struct node *gecici;
    while (temp!=NULL) {
        gecici=temp;
        temp=temp->next;
        free(gecici);
    }
}

void printt(){
    temp=head;
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void deleted(int value){ //delete node
    temp=head;
    
    while (temp!=NULL) {
        if (value==head->data) {
            g=head;
            head=head->next;
            head->prev=NULL;
            free(g);
            break;
        }
        else if (value==tail->data){
            g=tail;
            tail=tail->prev;
            tail->next=NULL;
            free(g);
            break;
        }
        else if (value==temp->data){
            g=temp;
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(g);
            break;
        }
        else if (value!=temp->data && temp->next==NULL){
            printf("eleman bulunamadi!!!\n");
        }
        temp=temp->next;
    }
}


int main(){
    srand(time(NULL));
    
    for (int i=0; i<10; i++) {
        
        addlist(rand()%100);
    }
    printt();
    int silinecek;
    printf("silmek istediginiz sayiyi girin:");
    scanf("%d",&silinecek);
    deleted(silinecek);
    printt();
    freee();
    return 0;
}
//


