/* CHIESTI 10 VALORI CALCOLA LA MEDIA */
#include <stdio.h>

int main(){
    int n=0, somma=0;
    float media;

    for(int i=1; i<=10; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        somma+=n;
    }
    media =(float)somma/10;
    printf("La media vale %.2f: ", media);
}