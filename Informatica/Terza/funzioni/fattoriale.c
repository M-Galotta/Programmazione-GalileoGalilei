/* Calcolare il fattoriale di un numero 
  Es: 7!= 1*2*3*4*5*6*7     */
#include <stdio.h>
long fattoriale(int _n);
int main(){
    int n=0;
    long fatt;
    
    do{
        printf("inserisci un numero: ");
        scanf("%d",&n);
    }while(n<=0);
    fatt = fattoriale(n);//   n parametro effettivo
    printf("il fattoriale di %d è %ld", n, fatt);

}
long fattoriale(int _n){
    long sumfat=1;

    for(int i=1; i<=_n; i++){
        sumfat*=i;
    }
    return sumfat;
}
