#include<stdio.h>
int main(){
	
	int z=10,sayac=0,m=0;
	for(int i=0;i<z;i++){
		
		if(i==z-1){
			m+=2;
			i=0;
			z-=1;
			for(int k=1;k<m;k++){
				printf("*");
			}
                printf("\n");
				}
			printf(" ");	
			}
    
	return 0;
}
