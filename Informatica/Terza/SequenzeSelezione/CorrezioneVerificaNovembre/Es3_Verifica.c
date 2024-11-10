/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.
*/
#include <stdio.h>
#include <time.h>

int main(){
	int n1, n2, scelta, somma, k, scarto1, scarto2;
	srand(time(NULL));
	
	printf("_____________MENU'_____________\n");
	printf("1) ESEGUI LA SOMMA IN VALORE ASSOLUTO\n");
	printf("2) ESEGUI LA DIFFERENZA TRA IL MAGGIORE E IL MINORE\n");
	printf("3) DATO K DETERMINARE CHI DEI DUE VALORI SI AVVICINA DI PIU' A K\n");
	printf("4) DETERMINARE SE UNO E' MULTIPLO DELL'ALTRO\n");
	printf("_QUALSIASI ALTRO VALORE INSERITO TERMINA IL PROGRAMMA_\n");
	printf("Inserisci la scelta: ");
	scanf("%d", &scelta);
	
	printf("Inserisci i due valori: ");
	scanf("%d%d", &n1, &n2);
	printf("%d, %d", n1, n2);

	switch(scelta){
		case 1:{
			somma=n1+n2;
			if(somma>=0)
				printf("\nLa somma in valore assoluto vale: %d", somma);
			else{
				somma*=-1;
				printf("\nLa somma in valore assoluto vale: %d", somma);
			}
			break;
		}
		case 2:{
			if(n1>n2)
				printf("\nLa differenza tra il maggiore e minore vale %d: ", n1-n2);
			else
				printf("\nLa differenza tra il maggiore e minore vale %d: ", n2-n1);
			break;
		}
		case 3:{
			k = rand()%9 + 0;
			printf("\nValore di k=%d", k);
			scarto1=n1-k;
			scarto2=n2-k;
			if(scarto1<0)
				scarto1*=-1;
			if(scarto2<0)
				scarto2*=-1;
			if(scarto1<scarto2)
				printf("\nIl numero che si avvicina di più a k=%d è %d ", k, n1);
			else
				printf("\nIl numero che si avvicina di più a k=%d è %d ", k, n2);
			break;
		}
		case 4:{
			if(n1>=n2){
				if(n1%n2==0 && n1!=n2)
					printf("\n%d è multiplo di %d", n1, n2);
				else if(n1!=n2)
						printf("\nI due valori non sono multipli");
					else
						printf("\nI due valori sono uguali");
			}
			else if(n2%n1==0)
					printf("\n%d è multiplo di %d", n2, n1);
				else
					printf("\nI due valori non sono multipli");
			break;
			}
		default:{
			printf("\nHai inserito una scelta non valida. Il programma termina.");
			break;
		}	
	}
}
