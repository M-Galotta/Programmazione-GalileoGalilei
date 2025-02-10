/* Calcolare il fattoriale di un numero 
  Es: 7!= 1*2*3*4*5*6*7     */
#include <stdio.h>
void fattoriale(int *_n,long *_fatt);
int main(){
    int n=0;
    long fatt=1;
    
    do{
        printf("inserisci un numero: ");
        scanf("%d",&n);
    }while(n<=0);

    fattoriale(&n,&fatt);//   n parametro effettivo
    printf("il fattoriale di %d è %ld", n, fatt);

}
void fattoriale(int *_n,long *_fatt){
   
    for(int i=1; i<=*_n; i++){
        *_fatt*=i;
    }
    
}


