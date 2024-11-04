/*	Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3, 
	chiedere all’utente la sua scelta e far generare al computer la sua.
	Stabilire il vincitore.
	N.B.:per chi non conoscesse il gioco: sasso vince forbice, 
	sasso perde carta, carta perde forbice.
*/
#include <stdio.h>
#include <time.h>

int main(){
	int pc=0;
	int my=0;
	srand(time(NULL));
	
	printf("Inserisci sasso(1) carta(2) forbice(3): ");
	scanf("%d", &my);
	pc=rand()%3 + 1;
	printf("%d scelta pc ", pc);
	if(pc==1){
		switch (my){
			case 1:{
				printf("\nPareggio ");
				break;
			}
			case 2:{
				printf("\nPc=sasso  io=carta ---> VINTO IO ");
				break;
			}
			case 3:{
				printf("\nPc=sasso  io=forbice ---> VINTO PC ");
				break;
			}
			default:{
				printf("\nHo inserito per sbaglio un valore non valido ");
				break;
			}
		}			
	}
	if(pc==2){
		switch (my){
			case 1:{
				printf("\nPc=carta  io=sasso ---> VINTO PC ");
				break;
			}
			case 2:{
				printf("\nPareggio ");
				break;
			}
			case 3:{
				printf("\nPc=carta  io=forbice ---> VINTO IO ");
				break;
			}
			default:{
				printf("\nHo inserito per sbaglio un valore non valido ");
				break;
			}
		}			
	}
	if(pc==3){
		switch (my){
			case 1:{
				printf("\nPc=forbice  io=sasso ---> VINTO IO ");
				break;
			}
			case 2:{
				printf("\nPc=forbice  io=carta ---> VINTO PC ");
				break;
			}
			case 3:{
				printf("\nPareggio ");
				break;
			}
			default:{
				printf("\nHo inserito per sbaglio un valore non valido ");
				break;
			}
		}			
	}
}