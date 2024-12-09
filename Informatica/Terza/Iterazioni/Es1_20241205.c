/* CALCOLARE IL QUOZIENTE FRA DUE NUMERI APPLICANDO IL 
    METODO DELLE SOTTRAZIONI SUCCESSIVE
*/

/*23, 3 
    23-3 20-3 17-3 14-3 11-3 8-3 5-3 2*/
#include <stdio.h>
int main(){
    int n1, n2, quoz=0, resto, temp;
    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);
    }while(n1<=0 || n2<=0);
    if(n2>n1){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    resto = n1;
    while(resto>=n2){
        resto -= n2;
        quoz++;
    }
    printf("Il risultato della divisione è %d con resto %d\n", quoz, resto);
    return 0;
}