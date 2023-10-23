#include<stdio.h>
#include<conio.h>

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
int lrotatedshift(int value,int i){ //this function performs a left-rotated shift on binary numbers
	// TR: bu fonksiyon  ikili sayılarda sola döndürülmüş kaydırma işlemi yapar
	unsigned int tutucu1,tutucu2;
	tutucu1=value<<i;
	tutucu2=value>>(32-i);
	return tutucu1|tutucu2;
	
	
	
}

int main(){
	unsigned int sayi;
	int howmany;
	printf("bir sayi girin:");
	scanf("%u",&sayi);
	ikiliyaz(sayi);
	printf("\nbu sayi kac kere left rotated shift edilsin?\n");
	scanf("%d",&howmany);
	sayi=lrotatedshift(sayi,howmany);
	ikiliyaz(sayi);
	printf("\n%u",sayi);
	
	
	
	return 0;
}
//
