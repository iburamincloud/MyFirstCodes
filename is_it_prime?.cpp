#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int asalMi(int a){
	int sayac=0,k;
	for(int i=1;i<a;i++){
		if(a%i==0){
			sayac++;
		}
		if(sayac==1){
			k=1;
		}
		else{
			k=0;
		}
		
	}
	return k;
}
int main(){
	int alinan;
	printf("sayi giriniz :");
	scanf("%d",&alinan);
	if(asalMi(alinan)==1){
		printf("sayi asaldir.");
	}
	else{
		printf("sayi asal degildir.");
	}
}
//
