#include<stdio.h>



void ikiliyaz(int a){
        int i=sizeof(a)*8-1;
        for(;i>=0;i--){
            if(a&(1<<i)){
                printf("1");
            }
            else{
                printf("0");
            }
            if(i%4==0){
                printf(" ");
            }
        }
    }
    
    
int sifirla(int a,int b,int s){ // TR: İstenen bitler 0 yapilir. // EN: requested bits are set to 1.
    for(int i=0;i<=s;i++){
        if(i>=b&&i<=s){
            a=a&~(1<<i);
        }
    }
    return a;
}



int birle(int a,int b,int s){ // TR: İstenen bitler 1 yapilir. // EN: requested bits are set to 1.
    for(int i=0;i<=s;i++){
        if(i>=b&&i<=s){
            a=a|(1<<i);
        }
    }
    return a;
}



int bityaz(int value,int start,int end,int temp){ // TR: baş ve  son bilgisine göre 32 bittlik int alanına istenen sayi konur.
	// According to the beginning and end information, the desired number is put into the 32-bit int field.
    sifirla(value,start,end);
    temp<<=start;
    value|=temp;
    
    return value;
}

int bitoku(int value,int start,int end,int temp){  //TR: baş ve  son bilgisine göre 32 bittlik int alanından istenen sayi okunur.
    //TR: According to the beginning and end information, the desired number is read from the 32-bit int field.
    value<<=(31-(end));
    value>>=(31-(end-start));
    
    
    return value;
}





int main(){
/*    int sayi,b,s;
    printf("sayi girin:");
    scanf("%d",&sayi);
    printf("hangi bitler arasi degistirilsin:\n");
    scanf("%d",&b);
    scanf("%d",&s);
    printf("%d\n",sayi);
    ikiliyaz(sayi);
    printf("\n");
    printf("sifirlansin(s) mi birlensin(b) mi?\n");
    if(getch()=='s'){
        sayi=sifirla(sayi,b,s);
    }
    else if(getch()=='b'){
        sayi=birle(sayi,b,s);
    }
    printf("%d\n",sayi);
    ikiliyaz(sayi);
    

    sayi=bityaz(0,b,s,sayi);
    printf("\n%d",sayi);
*/
    // TR: int tipinde bir değişkenin içinde  bir tarih saklama işlemi yapıldı. bitsel işlemler hafıza tasarrufu için gerekli ve çok eğlenceli bir konudur.
    // EN: A date has been stored inside a variable of type int. bit operations.
    int g=24,a=04,y=22,tarih=0;
    ikiliyaz(tarih);
    printf("\n");
    tarih=bityaz(tarih,12,17,g);
    ikiliyaz(tarih);
    printf("\n");
    tarih=bityaz(tarih,7,11,a);
    ikiliyaz(tarih);
    printf("\n");
    tarih=bityaz(tarih,0,6,y);
    ikiliyaz(tarih);
    printf("\n");
    printf("\n%d.%d.20%d",bitoku(tarih,12,17,0),bitoku(tarih,7,11,0),bitoku(tarih,0,6,0));
    printf("\n");

    return 0;
    

}
//
