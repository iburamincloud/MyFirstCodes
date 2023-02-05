#include<stdio.h>
#include<conio.h>


int asalmi(int gelen,int azalt,int sayac){
	if(gelen%azalt==0){
		sayac++;
	}
	if(azalt==1){
		if(sayac==2){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	return asalmi(gelen,azalt-1,sayac);
	
}
int main(){
	int alinan,sonuc;
	printf("bir sayi girin =>");
	scanf("%d",&alinan);
	sonuc=asalmi(alinan,alinan,0);
	if(sonuc==1){
		printf("asaldir");
	}
	else{
		printf("asal degildir");
	}
	
}
