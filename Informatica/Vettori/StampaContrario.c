/*
 INIZIALIZZATO L'ARRAY CON MULTIPLI DI 2
 STAMPARLO AL CONTRARIO
*/
#include <stdio.h>
#define MAX 10

int main(){
    int v[MAX], j=1;

    //carico l'array
    for(int i=0; i<MAX; i++){
        v[i]=2*j;
        j++;
    }

    //stampa del vettore
    for(int i=MAX-1; i>=0; i--){
        printf("%d\t", v[i]);
    }
}