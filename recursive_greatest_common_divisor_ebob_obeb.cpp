#include<stdio.h>
//This function finds the greatest common divisor of the number 2 that comes to it as a parameter.(recursive)
//Bu fonksiyon kendisine parametre olarak gelen 2 sayısının en büyük ortak bölenini bulur.(recursive->öz yinelemeli-> kendisini çağıran fonksiyon.)
int ebob(int a,int b,int c){
	if(a%b==0){
		if(c%b==0){
			return b;
		}
	}
	
		return ebob(a,b-1,c);
	
	
	
}

int main(){
	int sayi1,sayi2;
	printf("sayi giriniz:");
	scanf("%d",&sayi1);
	printf("sayi giriniz:");
	scanf("%d",&sayi2);
	if(sayi1>sayi2){
		printf("bu iki sayinin ebobu %d sayisidir.",ebob(sayi1,sayi2,sayi2));
	}
	else{
		printf("bu iki sayinin ebobu %d sayisidir.",ebob(sayi2,sayi1,sayi1));
	}
	
	
	
	
	
	return 0;
}
//
