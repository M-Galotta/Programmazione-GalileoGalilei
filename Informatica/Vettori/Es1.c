/* Inizializzazione - Riempimento con valori pari - Stampa
    Creazione di una libreria personale
*/
#include <stdio.h>
#include "libreria.c"
#define DIM 10

int main(){
    int vettore[DIM]={0};

    richiediValori(vettore,DIM);
    stampaVett(vettore,DIM,"-");
}