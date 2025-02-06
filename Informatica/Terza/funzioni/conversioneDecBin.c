/* dato un valore eseguire la conversione da decimale a binario */
#include <stdio.h>
#include <math.h>
long converti(int _n);
int main(){
    int n=0;
    long conv=0;
    do{
        printf("inserisci un valore: ");
        scanf("%d",&n);
    }while(n<=0);
    conv=converti(n);
    printf("%ld\n",conv);
}
long converti(int _n){
    int quoz=_n;
    int resto=0;
    int cont=0;
    int _conv=0;
    while(quoz!=0){
        resto=quoz%2;
        quoz=quoz/2;
        _conv+=resto*pow(10,cont);
        cont++;
    }
    return _conv;
}