#include<stdio.h>
int main(){
	
	int y=9,d=1,k=10;
	for(int b=0;b<10;b++){
		
		for(int e=0;e<k;e++){
			printf(" ");	
		}
		for(y=0;y<d;y++){
			printf("*");
			
		}
	printf("\n");
	d=d+2;
	k--;
	}

	return 0;
}
//