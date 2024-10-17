/* INSERITO UN CARATTERE DIRE SE E' UNA VOCALE */

#include <stdio.h>

int main(){
	char car;
	
	printf("Inserisci un carattere: ");
	scanf("%c", &car);
	printf("Il carattere inserito vale: %c", car );
	
	if(car=='a' || car=='e' || car=='i' || car=='o' || car=='u')
		printf("\nIl carattere %c è una vocale.", car);
	else
		printf("\nIl carattere %c non è una vocale.", car);
}