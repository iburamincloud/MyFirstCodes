#include <stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *prev;
    struct node *next;
    
};
struct node *head=NULL;
struct node *temp=NULL;


void sortedList(int value){ // TR: sıralı bir şekilde elemanları listeye ekler. //EN:this function add sorted node to list.
    if (head==NULL) {
        struct node *space=(struct node*)malloc(1*sizeof(struct node));
        head=space;
        head->data=value;
        head->prev=NULL;
        head->next=NULL;
    }
    else{
        struct node *space=(struct node*)malloc(1*sizeof(struct node));
        space->data=value;
        temp=head;
        while (temp!=NULL) {
            if (value>=temp->data) {
                temp->prev=space;
                space->next=temp;
                space->prev=NULL;
                head=space;
                break;
            }
            else if (value<=temp->data && temp->next!=NULL && temp->next->data<=value ){
                space->next=temp->next;
                space->prev=temp;
                temp->next=space;
                space->next->prev=space;
                break;
            }
            else if (value<=temp->data && temp->next==NULL){
                temp->next=space;
                space->prev=temp;
                space->next=NULL;
                break;
            }
            
            else temp=temp->next;
        }
        
    }
}
void printt(){
    temp=head;
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
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

int main() {
    int kontrol=0;
    
    while (kontrol==0) {
        printf("sirali eleman eklemek icin 0 a cikmak icin 1 e basin.");
        scanf("%d",&kontrol);
        if (kontrol==1) {
            break;
        }
       
        
            int value;
            printf("eleman girin:");
            scanf("%d",&value);
            sortedList(value);
        
    }
    printt();
    freee();
    
    
    return 0;
}
