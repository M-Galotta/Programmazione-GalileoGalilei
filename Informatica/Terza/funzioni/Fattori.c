/* Dato un valore stampare i suoi fattori
Es: 28 = 2*2*7   2, 2, 7
Es: 36 = 2*13
*/
#include <stdio.h>
void calcolaFattori(int _n){
    int i=2;

    while(_n!=0){
        if(_n%i==0){
            printf("%d\t", i);
            _n = _n/i;
            i=2;
        } else 
            i++;    
    }
}

int main(){
    int n;

    do{
        printf("Inserisci un valore: ");
        scanf("%d",&n);
    }while(n<=0);
    printf("I fattori di %d sono: ", n);
    calcolaFattori(n);
    return 0;
}