/* 
    DATI 5 VALORI STAMPARLI
*/
#include <stdio.h>

int main(){
    int num;//10 variabili
    int cnt=0;//variabile contatore inizializzata a 0

    while(cnt<5){
        printf("Inserire un numero: ");
        scanf("%d", &num);
        cnt++; //cnt=cnt+1;
        printf("Il valore inserito è: %d\n", num);
    }

}