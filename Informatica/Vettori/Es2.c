/* Caricato un vettore con valori random 
    calcolare la media dei valori
*/
#include <stdio.h>
#include "libreria.c"
#define DIM 4

int main(){
    int vettore[DIM]={0};
    float media;

    caricaRandom(vettore,DIM);
    stampaVett(vettore,DIM,"-");
    media=calcolaMedia(vettore,DIM);
    printf("La media vale: %.2f", media);
}