/* Calcolare la somma dei primi N numeri 
 naturali.
 Es: 5 1+2+3+4+5
*/
#include <stdio.h>
int main(){
    int n=0;
    int somma=0;

    do{
        printf("Inserisci un valore: ");
        scanf("%d", &n);
    }while(n<0);
    for(int i=0; i<=n; i++){
        somma+=i;
        printf("%d+", i);
    }
    printf("=%d", somma);

}