#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sayidegeriToplam(int a=1){
	if(a<10){
		printf("%d",a);
	}
	else if(a<100){
		int birler=0,onlar=0;
		onlar=a/10;
		birler=a-(10*onlar);
		printf("%d",onlar+birler);
		
	}
	else{
		int birler=0,onlar=0,yuzler=0;
		yuzler=a/100;
		onlar=(a-(100*yuzler))/10;
		birler=(a-(100*yuzler)-(10*onlar));
		printf("%d",yuzler+onlar+birler);
	}
}

int main(){
	int sayi=0;
	printf("en fazla uc basamakli sayi giriniz :");
	scanf("%d",&sayi);
sayidegeriToplam(sayi);
return 0;

}
