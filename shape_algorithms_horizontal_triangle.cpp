#include<stdio.h>
int main(){
	int kat,a,b,sayac=0;

	printf("en uzun satirda kac kare olsun?");
	scanf("%d",&kat);
	a=kat-1;
	b=kat-a;
	for(int satir=0;satir<kat;satir++){
		for(int bosluk=0;bosluk<a;bosluk++){
			printf(" ");
		}
		for(int yildiz=0;yildiz<b;yildiz++){
			printf("#");
		}
		sayac++;
		if(sayac<kat){
		a--;
		b++;
	    }
	    else{
	    	satir=0;
	    	a++;
	    	b--;
		}
		printf("\n");
		if(sayac==2*kat){
			break;
		}
		
	}
	return 0;
}
//



