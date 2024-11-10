/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.
*/
#include <stdio.h>

int main(){
	float numero, somma=0, media;
	int cnt=0, flag=0;
	
	printf("Inserisci un valore: ");
	scanf("%f", &numero);
	somma=numero;
	cnt++;
	if(somma<200){
		printf("Inserisci un valore: ");
		scanf("%f", &numero);
		somma+=numero;
		cnt++;
	}
	else{
		printf("Hai inserito il primo valore superiore a 200 e la media non è calcolabile.");
		flag=1;
		}
	if(somma<200){
		printf("Inserisci un valore: ");
		scanf("%f", &numero);
		somma+=numero;
		cnt++;
	}
	else {if(flag!=1){
			media=somma/cnt;
			printf("\nHai inserito %d valori e la media vale %.2f ", cnt, media);
			}
		flag=1;
		}
	if(somma<200){
		printf("Inserisci un valore: ");
		scanf("%f", &numero);
		somma+=numero;
		cnt++;
		media=somma/cnt;
		printf("\nHai inserito %d valori e la media vale %.2f ", cnt, media);
	}
	else {if(flag!=1){
			media=somma/cnt;
			printf("\nHai inserito %d valori e la media vale %.2f ", cnt, media);
			}
		flag=1;
		}
				

}