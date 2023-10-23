#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// pointers are work like arrays. // pointerlar diziler gibi çalışır.
int main(){
	srand(time(NULL));
	int *ilkadres,dizi[20],*tut1,*tut2,sakla;
	ilkadres=dizi;
	for(int i=0;i<20;i++){
		dizi[i]=rand()%100;
		printf("%d ",*(ilkadres+i));
	}
	
	
	printf("\n");
	for(int i=0;i<20;i++){
		tut1=&dizi[i];
		tut2=tut1;
		for(int j=i+1;j<20;j++){
			if(*tut1<dizi[j]){
				tut1=&dizi[j];
				
			}
		}
		sakla=*tut1;
		*tut1=*tut2;
		*tut2=sakla;
		
	}
	for(int i=0;i<20;i++){
		
		printf("%d ",*(ilkadres+i));
	}
	
	return 0;
	
}
//
