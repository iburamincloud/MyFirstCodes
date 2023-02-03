#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int tut,okunan=0,*dinamikdizi,sayac=0;;
    dinamikdizi=(int*)malloc((sayac+1)*sizeof(int));
    srand(time(NULL));
    FILE *dosya1=fopen("sayilar.txt","w+");
    for(int i=0;i<100;i++){
        tut=rand()%100;
        fprintf(dosya1,"%d\n",tut);
    }
    rewind(dosya1);
    
    printf("dosya\n");
    for(int i=0;i<100;i++){
        fscanf(dosya1,"%d",&okunan);
        if(okunan&1<<5){
            
        }
        else{
            
            dinamikdizi=(int*)realloc(dinamikdizi, (sayac + 1)*sizeof(int)); // realloc() dynamically allocates space. // dinamik alan ayrılır.
            dinamikdizi[sayac] = okunan;
            sayac++;
            printf("%d->%d\n",i,okunan);
        }
        
    }
    printf("\n%d tane ayıklandı(5. biti sifir olan sayilar)\n",sayac);
    rewind(dosya1);
    
    
    
    for(int i=0;i<sayac;i++){
        printf("%d->%d\n",i,*(dinamikdizi+i));
    }
    
    
    
    fclose(dosya1);
    free(dinamikdizi);
    
    return 0;
}



