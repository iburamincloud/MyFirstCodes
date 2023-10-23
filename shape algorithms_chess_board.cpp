#include<stdio.h>
int main (){
	int sayac=0;
	for(int i=0;i<=10;i++){
		if(i%2==0){
			printf("%c",219);
			
		}
		    else{
		    	printf(" ");
			}
			    if(i==10){
			    	
			    	printf("\n");
			    	sayac++;
			    	if(sayac%2==0){
			    		i=1;
					}
					else{
						i=0;
					}
				}
				if(sayac==10){
					break;
				}
	}
	
	return 0;
}
//
