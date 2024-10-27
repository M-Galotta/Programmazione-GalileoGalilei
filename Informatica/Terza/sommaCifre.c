/*  Dato un numero controllare se è divisibile o meno per 3 
	applicando la regola della somma delle cifre che compongono 
	il numero. 
	ES:   dato di input: 123 eseguo la somma delle sue 
	cifre -> 1+2+3=6 ->  risultato 6 -> ok 6 è multiplo di 3.
	NB: qualora il numero fosse a più cifre vi fermate alla prima 
	somma delle cifre e poi controllate se il risultato è divisibile per 3.
*/
#include <stdio.h>

int main(){
	int n=0;
	int  q, r;
	int somma=0;
	q=0; r=0;
	
	printf("Inserisci un numero tra 0 e 999: ");
	scanf("%d", &n);
	
	q=n;
	if(q!=0){
		r=q%10;
		q=q/10;
		somma=somma + r;
	}
	if(q!=0){
		r=q%10;
		q=q/10;
		somma=somma + r;
	}
	if(q!=0){
		r=q%10;
		q=q/10;
		somma=somma + r;
	}
	//printf("\n%d", somma);
	if(somma%3==0)
		printf("\nIl numero %d è divisibile per 3 ");
	else
		printf("\nIl numero %d non è divisibile per 3 ");
 }