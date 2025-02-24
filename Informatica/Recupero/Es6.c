/*data una sequenza di valori determinare quanti numeri sono perfetti
il programma termina quando il numero perfetto supera una soglia 
*/
#include <stdio.h>
int main(){
    int n, k, sum=0, perf;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);

    do{
        printf("inserisci il valore della soglia: ");
        scanf("%d", &k);
    }while(k<=0);
    
    do{
        for(int i=1; i<n; i++){
            if(n%i==0)
                sum+=i;
        }
        if(sum==n){
            printf("il numero %d è perfetto", n);

        }
        else 
            printf("il numero non è perfetto");
        

    }while();

}
