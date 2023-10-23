#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int tutucu=0,sayac=0;
	
	FILE *dosya=fopen("sayilar.txt","r");
	FILE *dosya2=fopen("sayilar2.txt","w");
	if(dosya==NULL){
		printf("dosya acilamadi");// -> dosya not declared!
	}
	else{
		if(dosya2==NULL){
			printf("dosya acilamadi"); // -> dosya2 not declared!
		}
		else{
				while(!feof(dosya)){
					fscanf(dosya,"%d",&tutucu);
					//asall�k kontrol� (prime number control)-------
					for(int i=1;i<=tutucu;i++){
						if(tutucu%i==0){
							sayac++;
						}
					}
					if(sayac==2){
						fprintf(dosya2,"%d\n",tutucu);
						sayac=0;
					}
					sayac=0;
					//----------------------------------------------
				}
				fclose(dosya);
				fclose(dosya2);
			}
	}
	
	
	
	return 0;
}
//