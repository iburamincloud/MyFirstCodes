#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL)); //EN:this command makes the sequence of random numbers change along with the time variable. Namely, we expect the rand() function to generate a random number every time it runs, but without this line, it would give us the random numbers in a single array in the same order every time the program runs, but thanks to this line, we have different and random lists every time we run it.TR:bu komut rasgele sayılar dizilerinin  zaman değişkeni ile birlikte değişmesini sağlar. Eğer yazmasaydık her zaman aynı rastgele sayıları aynı sırayla üretmiş olacaktık. şöyle ki rand() fonksiyonunun her çalıştığında rastgele bir sayı üretmesini bekleriz fakat bu satır olmasaydı tek bir dizideki rastgele sayıları program her çalıştığında aynı sırayla bize verecekti fakat bu satır sayesinde her çalıştırrdığımızda farklı ve rastgele listelerimiz olur.
	int sayi=0;
	FILE *dosya=fopen("sayilar.txt","w");
	if(dosya==NULL){
		printf("dosya acilamadi");// -> dosya not declared!
	}
	else{
		for(int i=0;i<100;i++){
			sayi=rand()%1000; // generates random number
			fprintf(dosya,"%d \n",sayi);
		}
		fclose(dosya);
	}
	
	
	
	return 0;	
}
