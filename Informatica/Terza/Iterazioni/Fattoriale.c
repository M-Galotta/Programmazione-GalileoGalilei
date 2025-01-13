/* Scrivi un programma che esegue il calcolo del fattoriale 
di un numero num inserito.
Es: 5! fatt=1*2*3*4*5
*/
#include <stdio.h>

int main(){
    int num, fatt=1;

    printf("Inserisci un numero: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
        fatt*=i;

    printf("Il calcolo del fattoriale di %d vale %d", num, fatt);
}