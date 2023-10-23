#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int faktoriyel(int a){
	int faktoriyel=1;
	for(a;a>0;a--){
		faktoriyel=faktoriyel*a;
	}
	return faktoriyel;
}
int kombinasyon(int n=1,int r=1){
	return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
}
int main(){
	int n=0,r=0;
	printf("C(n,r) de n yi giriniz: ");
	scanf("%d",&n);
	printf("C(n,r) de r yi giriniz: ");
	scanf("%d",&r);
	printf("cevap: %d",kombinasyon(n,r));
} 
//
