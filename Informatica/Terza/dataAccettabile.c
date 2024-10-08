/* data una data in formato gg mm aaaa 
    verificare se la data è accettabile  */
#include <stdio.h>

int main(){

    int giorno=0;
    int mese=0;
    int anno=0;

    //richiesta degli input
    printf("Inserisci il giorno: ");
    scanf("%d", &giorno);
    printf("Inserisci il mese: ");
    scanf("%d", &mese);
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);

    //controllo dell'anno
    //un anno è bisestile se è multiplo di 4 ma non di 100 oppure multiplo di 400
    if(anno%100==0){
        if (anno%400==0){
            printf("L'anno è bisestile");
        }
    }
    else{
        if (anno%4==0){
            printf("L'anno è bisestile");
        }
    }

}