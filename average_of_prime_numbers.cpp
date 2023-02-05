#include<stdio.h>
#include<conio.h>
int main(){
	int toplam=0,sayi,sayac=0,sayac2=0,w=0;
	while(w<1){
		printf("lutfen bir sayi girin:");
		scanf("%d",&sayi);
		for(int k=1;k<sayi;k++){
			if(sayi%k==0){
				sayac++;
			    }
			}
				if(sayac==1){
					toplam=toplam+sayi;
					sayac2++;
					sayac=0;
				    }
				    else sayac=0;
					
				        if(sayi<0){
				        	printf("asal olanlarin toplami=%d\nasal olanlarin ortalamasi=%f",toplam,(float)toplam/sayac2);
				        	break;
						}
			    }
		   
	
	return 0;
}
