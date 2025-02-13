/* Dato un numero a più cifre stampare quelle di posizione pari 
    Esempio: 5231   stampaerà: 3 e 5                            */
#include <stdio.h>

int main(){
    int n, cifra, cnt=1;

    do{
        printf("Inserisci un numero a 4 cifre: ");
        scanf("%d", &n);
    }while(n<1000 || n>9999);

    /* in modo generico ci assicuriamo che n sia positivo
    do{
        printf("Inserisci un numero a 4 cifre: ");
        scanf("%d", &n);
    }while(n<=0);
    */

   for(int i=1; i<=4; i++){
        cifra = n%10; //prendiamo il resto della divisione di n con 10
        n=n/10;
        if(i%2==0)
            printf("La cifra di posizione pari è: %d\n", cifra);

   }

   /*
   while(n!=0){
    cifra = n%10; //prendiamo il resto della divisione di n con 10
        n=n/10;
        if(i%2==0)
            printf("La cifra di posizione pari è: %d\n", cifra);
    cnt++;
   }
   */
  return 0;
}