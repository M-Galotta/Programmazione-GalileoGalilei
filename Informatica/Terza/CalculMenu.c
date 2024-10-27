/* 	Creare una sorta di menù( vedi esempio) tramite dei printf 
	per la scelta dell'operazione da compiere tra due valori 
	generati casualmente( eseguendo lì dove c'è bisogno gli opportuni 
	controlli). Comunicare il risultato dell'operazione o la scelta 
	dell'utente di non fare niente e uscire dal programma:
	ES: "Seleziona l'operazione da eseguire: 
        0.  TERMINA
        1.  SOMMA
        2.  DIFFERENZA
        3.  MOLTIPLICAZIONE
        4.  DIVISIONE  "
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1=0;
	float n2=0;
	int scelta=0;
	
	printf("-------CALCOLATRICE BASE --------\n");
	printf("0.  TERMINA PROGRAMMA\n");
	printf("1.  ESEGUI L'ADDIZIONE\n");
	printf("2.  ESEGUI LA SOTTRAZIONE\n");	
	printf("3.  ESEGUI LA MOLTIPLICAZIONE\n");
	printf("4.  ESEGUI LA DIVISIONE\n");
	printf("------ SCEGLI UN VALORE DAL MENU'---------\n");
	scanf("%d", &scelta);
	srand(time(NULL));
	
	n1=rand()%50 +1;
	n2=rand()%50 +1;
	printf("\n%.2f %.2f\n",n1, n2);
	switch (scelta){
		case 1: 
			printf("la somma vale: %.2f \n", n1+n2);
			break;
		case 2:
			printf("la sottrazione vale: %.2f \n", n1-n2);
			break;
		case 3:
			printf("la moltiplicazione vale: %.2f \n", n1*n2);
			break;
		case 4:
			if(n2!=0)
				printf("la divisione vale: %.2f \n", n1/n2);
			else
				printf("la divisione vale: %.2f \n", n2/n1);
			break;
		default:
			printf("\n IL  PROGRAMMA  TERMINA  QUI ");
	}
	
}