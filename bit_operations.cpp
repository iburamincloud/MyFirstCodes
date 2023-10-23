#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
// EN:This function [ikiliyaz()] makes each bit of the data number sequentially 1 and. (convert)-> binary number.
// EN:Then prints the result to the screen for each bit.
// TR: Bu fonksiyon [ikiliyaz()] data sayinin her bitini 1 ile ve yapar ve sonucu ekrana basar.
// TR: Ayrica da her 4 bit icin 1 bosluk birakir:) sonuc olarak ikili sayı sistemisne göre ekrana yazdirmis oluruz.

void ikiliyaz(int value){
	int i=sizeof(int)*8-1;
	for(;i>=0;i--){
		if(value&1<<i){
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

int main(){
	srand(time(NULL));
	FILE *dosya1=fopen("sayilar0.txt","w");
	FILE *dosya2=fopen("sayilar1.txt","w");
	unsigned int sayi=0;
    // EN: Some operations are performed with the numbers in the file according to the 5th bit.
    // TR: Dosyadaki sayıların 5. bitine göre bazı işlemler yapılır.
	for(int i=0;i<100;i++){
		sayi=rand()%100;
		printf("%u randomdur\n",sayi);
		ikiliyaz(sayi);
		printf("\n");
		if(sayi&(1<<5)){
			printf("%u sayinin 5. biti 1 dir ve degisimden sonrasi\n ",sayi);
			sayi&=~(1<<3);
			fprintf(dosya2,"%u\n",sayi);
			
			ikiliyaz(sayi);
			printf("\n");
		}
		else{
			printf("%u sayinin 5. biti 0 dir ve degisimden sonrasi\n ",sayi);
			sayi|=(1<<4);
			fprintf(dosya1,"%u\n",sayi);
			
			ikiliyaz(sayi);
			printf("\n");
		}
		
	}
	fclose(dosya1);
	fclose(dosya2);
	return 0;
}
//
