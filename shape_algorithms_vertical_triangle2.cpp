#include<stdio.h>
    int main() {
    	
    int say=0,k;
    printf ("piramit kac katli olsun?");
    scanf("%d",&k);
    
    for (int z=0;z<=say;z++){
    	
    	
    	
    	if(z==say){
    		z=0;
    		printf("\n");
    		say++;
    		}
			
    		if(say==k){
    			break;
    		
			}
		
			printf("*");
	}
	
/*	int sayac=1;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<sayac;j++)
		{
			printf("*");
		}
		printf("\n");
		sayac++;
	}*/
	
    return 0;
}
//
    

