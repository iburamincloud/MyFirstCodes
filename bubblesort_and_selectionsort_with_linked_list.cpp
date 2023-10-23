//
//  main.cpp
//  sıralama algoritmaları
//
//  Created by ibrahim dağcı on 1.06.2022.
//



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

void list(int value){
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
        tail->next=space;
        space->prev=tail;
        space->next=NULL;
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
/*TR: Bubble sort, bitişik öğeleri yanlış sıradalarsa tekrar tekrar değiştirerek çalışan en basit sıralama algoritmasıdır. Bu algoritma, ortalama ve en kötü durum zaman karmaşıklığı oldukça yüksek olduğundan büyük veri kümeleri için uygun değildir.*/
/*EN:Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.*/
void bubblesort(){
    int keep=NULL;
    for (int i=0; i<9; i++) {
        temp=head;
        while (temp->next!=NULL) {
            if(temp->data>temp->next->data){
                keep=temp->next->data;
                temp->next->data=temp->data;
                temp->data=keep;
            }
            temp=temp->next;
        }
    }
}
/*EN:Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion. This process is repeated for the remaining unsorted portion of the list until the entire list is sorted. */
/* TR: Seçim sıralaması, listenin sıralanmamış bölümünden en küçük (veya en büyük) öğeyi tekrar tekrar seçip listenin sıralanmış bölümüne taşıyarak çalışan basit ve etkili bir sıralama algoritmasıdır. Algoritma, listenin sıralanmamış bölümünden en küçük (veya en büyük) öğeyi tekrar tekrar seçer ve sıralanmamış bölümün ilk öğesiyle değiştirir. Bu işlem, listenin kalan sıralanmamış kısmı için tüm liste sıralanana kadar tekrarlanır.*/
void selectionsort(){
    temp=head;
    struct node *keep=NULL;
    struct node *temp2;
    int a;
    while (temp!=NULL) {
        temp2=temp->next;
        keep=temp;
        while (temp2!=NULL) {
            if (keep->data<temp2->data) {
                keep=temp2;
            }
            
            temp2=temp2->next;
        }
        
        a=keep->data;
        keep->data=temp->data;
        temp->data=a;
        temp=temp->next;
    }
}


int main() {
    srand(time(NULL));
    for (int i=0; i<10; i++) {
        list(rand()%100);
    }
    printt();
    selectionsort();
    printf("\n");
    printt();
    bubblesort();
    printf("\n");
    printt();
    freee();
    return 0;
}
//






