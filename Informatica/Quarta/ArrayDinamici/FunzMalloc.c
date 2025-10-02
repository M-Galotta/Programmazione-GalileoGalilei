/*CREARE UN ARRAY DINAMICO CHIEDENDO ALL'UTENTE LA SUA DIMENSIONE 
IL PROGRAMMA DEVE PREVEDERE LE SUEGUENTI FUNZIONI :
1. CREA L'ARRAY 
2. INSERISCE GLI ELEMENTI NELL'ARRAY
3. STAMPA DEI VALORI
4. ESCI
*/
#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _n){
    
   int *_vettore=(int*)malloc(_n *sizeof(int));
   if(_vettore==NULL){
        printf("Errore di allocazione!\n");
        return 1;
   }
   return _vettore;
}

int* inserisciValori(int *_vettore, int _n){

    for(int i=0; i<_n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, int _n){
    printf("Hai inserito i seguenti elementi: ");
    for(int i=0; i<_n; i++){
        printf("%d\t", _vettore[i] );
    }
    printf("\n");
}

int main(){
    int *vettore=NULL;//puntatore al vettore
    int n;
    
    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }while(n<0);

    vettore = creaVett(n);
    vettore = inserisciValori(vettore,n);
    stampaVett(vettore,n);
    
    free(vettore);

}