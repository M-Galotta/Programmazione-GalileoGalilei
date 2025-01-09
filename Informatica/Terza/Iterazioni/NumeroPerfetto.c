/* Es pag 223 n 17
Scrivi un programma che ricerca i primi tre numeri perfetti e li visualizza 
sullo schermo.
ES: n=6 divisori=1,2,3 somma=1+2+3=6
6 - 28 - 496
*/
#include <stdio.h>

int main(){
    int i,j,somma=0;

    for(i=1; i<500; i++){
        for(j=1; j<=i/2; j++){
            if(i%j==0)
                somma+=j;
            }  
        if(somma==i){
                printf("\nIl numero %d è un numero perfetto.", i);    
        }
        somma=0;
    }
}