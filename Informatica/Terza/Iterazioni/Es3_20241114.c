/*
   LEGGERE UNA SEQUENZA DI NUMERI, VISUALIZZARLA E DETERMINARE QUANTI  
   NUMERI SONO STATI INSERITI. TERMINA NON APPENA ARRIVA UNO 0 
*/
#include <stdio.h>

int main(){
    int numero;
    int cnt=1;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    
    while( numero!=0){
        printf("Il valore inserito è: %d\n", numero);
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        cnt++;
    }
    printf("Hai inserito %d valori", cnt);
}