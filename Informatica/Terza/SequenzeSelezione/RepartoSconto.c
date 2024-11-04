/*	Un grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
	La Direzione decide di applicare sui prodotti di ciascun reparto
	sconti con percentuali differenziate:
	-  reparto	1 = nessuno sconto 
	-  reparto 	2 = sconto 3%
	-  reparto 	3 = sconto 2%
	-  reparto 	4 = sconto 5%
	Dati reparto di appartenenza e prezzo di un prodotto, calcolare e
	visualizzare il prezzo scontato.
*/
#include <stdio.h>

int main(){
	int reparto=0;
	float prezzo=0;
	float scontato=0;
	
	printf("Dimmi il reparto di appartenenza del prodotto: ");
	scanf("%d", &reparto);
	printf("Inserisci adesso il prezzo del prodotto: ");
	scanf("%f", &prezzo);

	switch(reparto){
		case 1:{
			printf("Per questo reparto non sono previsti sconti. ");
			break;
		}
		case 2:{
			scontato = prezzo - prezzo * 3/100;
			printf("Per questo reparto è previsto uno sconto, il prezzo scontato vale: %.2f", scontato);
			break;
		}
		case 3:{
			scontato = prezzo - prezzo * 2/100;
			printf("Per questo reparto è previsto uno sconto, il prezzo scontato vale: %.2f", scontato);
			break;
		}
		case 4:{
			scontato = prezzo - prezzo * 5/100;
			printf("Per questo reparto è previsto uno sconto, il prezzo scontato vale: %.2f", scontato);
			break;
		}
		default: {
			printf("Non hai inserito un reparto valido. ");
			break;
		}
	}
	}