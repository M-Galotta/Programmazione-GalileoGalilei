/* STAMPARE I DIVISORI PARI DI UNA SEQUENZA 
    DI NUMERI. TERMINA NON APPENA SI INSERISCE UNO 0
*/

#include <stdio.h>

int main(){
    int N=0;

    do{
        do{
            printf("inserisci un numero: ");
            scanf("%d", &N);
        }while(N<0);
        if(N!=0){
            // calcoliamo i divisori di N
            printf("I divisori pari di %d sono : \n", N);
            for(int i=1; i<=N; i++){
                if(N%i==0 && i%2==0){
                    printf("%d - ", i);
                }
            }
        }
        else
            printf("\nHai inserito uno 0");    

    }while(N!=0);

    return 0;
}