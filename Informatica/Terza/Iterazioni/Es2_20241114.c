/*
   LEGGERE UNA SEQUENZA DI NUMERI, VISUALIZZARLA. 
   SI TERMINA NON APPENA ARRIVA UNO 0 
*/
#include <stdio.h>

int main(){
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    while( numero!=0){
        printf("Il valore inserito è: %d\n", numero);
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
    }

}