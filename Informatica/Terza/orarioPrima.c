/*	Scrivere un programma che legge 2 orari in ore minuti e secondi 
	e dice quale viene prima dei due. (Si risolva l’esercizio 
	senza trasformare tutto in secondi)
*/
#include <stdio.h>

int main(){
	int o1, m1, s1, o2, m2, s2;
	
	//acquisizione primo orario
	printf("Inserire il primo orario in formato ore, minuti, secondi: ");
	scanf("%d%d%d", &o1, &m1, &s1);
	printf("L'orario inserito è: %d,%d',%d''", o1, m1, s1);

	//acquisizione secondo orario
	printf("\nInserire il secondo orario in formato ore, minuti, secondi: ");
	scanf("%d%d%d", &o2, &m2, &s2);
	printf("L'orario inserito è: %d,%d',%d''", o2, m2, s2);	
	//controlliamo la validità del primo orario
	if( o1>0 && o1<=24 && m1>=0 && m1<60 && s1>=0 && s1<60)
		printf("\nIl primo orario è accettabile");
	else
		printf("\nIl primo orario non è accettabile");
		
	//controlliamo la validità del secondo orario
	if( o2>0 && o2<=24 && m2>=0 && m2<60 && s2>=0 && s2<60)
		printf("\nIl secondo orario è accettabile");
	else
		printf("\nIl secondo orario non è accettabile");	
	
	//controlliamo quale orario viene prima dei due
	if(o1<o2)
		printf("\nIl primo orario %d,%d',%d'' viene prima", o1, m1, s1);
	else{
		if(o1==o2){
			if(m1<m2)
				printf("\nIl primo orario %d,%d',%d'' viene prima", o1, m1, s1);
			else
				if(m1==m2){
					if(s1<s2)
						printf("\nIl primo orario %d,%d',%d'' viene prima", o1, m1, s1);
					else{
						if(s1==s2)
							printf("\nGli orari sono uguali");
						else
							printf("\nIl secondo rario %d,%d', %d'' viene prima", o2, m2, s2);
					}		
				}
				else
					printf("\nIl secondo rario %d,%d', %d'' viene prima", o2, m2, s2);
		}
		else
			printf("\nIl secondo rario %d,%d', %d'' viene prima", o2, m2, s2);
	}
}
