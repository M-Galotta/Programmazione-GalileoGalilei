/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.
*/
#include <stdio.h>

int main(){
	int numero, esponente, quoziente, resto, flag=0;
	
	printf("Inserire un numero tra 1 e 20: ");
	scanf("%d", &numero);
	quoziente=numero;
	
	if(numero>0 && numero<=20){
		
		if(quoziente!=1 && flag!=1){
			resto=quoziente%2;
			if(resto==0){
				quoziente=quoziente/2;
				esponente++;
			}
			else{
				flag=1;
				printf("\nIl numero %d non è potenza di 2. ", numero);
			}
		}
		
		if(quoziente!=1 && flag!=1){
			resto=quoziente%2;
			if(resto==0){
				quoziente=quoziente/2;
				esponente++;
			}
			else{
				flag=1;
				printf("\nIl numero %d non è potenza di 2. ", numero);
			}
		}
		
		if(quoziente!=1 && flag!=1){
			resto=quoziente%2;
			if(resto==0){
				quoziente=quoziente/2;
				esponente++;
			}
			else{
				flag=1;
				printf("\nIl numero %d non è potenza di 2. ", numero);
			}
		}
		
		if(quoziente!=1 && flag!=1){
			resto=quoziente%2;
			if(resto==0){
				quoziente=quoziente/2;
				esponente++;
			}
			else{
				flag=1;
				printf("\nIl numero %d non è potenza di 2. ", numero);
			}
		}
		
		if(flag==0)
			printf("\nIl numero %d è potenza del 2 e ha esponente %d ", numero, esponente);
	
	}
	
	else
		printf("\nHai inserito un numero che non rispetta la richiesta fatta. Il programma termina. ");




}