#include<stdio.h>
//This function finds the sum of the numbers up to the number that comes to it as a parameter.
//Bu fonksiyon parametre olarak kendisine gelen sayıya kadar olan sayıların toplamını bulur.(a sayının kendisi dahil)
int toplayan(int a){
	if(a==1){
		return 1;
	}

		return a+toplayan(a-1);
	
}


int main(){
	int sayi1;
	printf("sayi giriniz:");
	scanf("%d",&sayi1);
	printf("bu sayiya kadar olan pozitif sayilarin toplami %d",toplayan(sayi1));
	
	
	return 0;
}
