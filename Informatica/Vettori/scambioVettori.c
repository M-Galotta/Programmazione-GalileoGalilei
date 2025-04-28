/*  DATI DUE VETTORI CARICATI CASUALMENTE 
    ESEGUIRE UNO SCAMBIO DI VALORI
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.c"

#define DIM 4

int main(){
    srand(time(NULL));
    int vett1[DIM]={0};
    int vett2[DIM]={0};


    caricaCasuale(vett1, DIM, 10,50);
    stampaVett(vett1, DIM, '-');
    caricaCasuale(vett2, DIM, 10,50);
    printf("\n");
    stampaVett(vett2, DIM, '-');
    scambioVettori(vett1, vett2, DIM);
    stampaVett(vett1, DIM, '-');
    printf("\n");
    stampaVett(vett2, DIM, '-');
}