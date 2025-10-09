/*Metodo più efficiente con typedef */
#include <stdio.h>
#include <stdlib.h>

typedef char* String; //alias per puntatore a char

int main(){
	String str = NULL; //la nostra stringa dinamica
	int size =0;	//lunghezza stringa effettiva
	int capacity =0; //spazio allocato
	char c;
	
	printf("Iserisci una stringa (termina con invio):\n");
	
	while((c=getchar()) != '\n' && c != EOF){
		if( (size +1) >= capacity){
			capacity +=10; //rialloco a blocchi da 10
			String tmp = realloc(str, capacity * sizeof(char));
			if (tmp == NULL){
				free(str);
				printf("Errore di allocazione");
				return 1;
			}
			str = tmp;
		}
		str[size+1] = c;
	}
	str[size]= '\0'; //terminatore di stringa
	printf("Hai inserito: %s\n", str);
	free(str);
	
}