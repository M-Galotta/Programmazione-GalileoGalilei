/* DATA UNA STRINGA TROVARE UNA SOTTOSTRINGA SENZA UTILIZZARE LA 
LIBRERIA STRING.H*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

void compatta(String buffer, int len){

        if(len>0 && buffer[len-1]=='\n'){
            buffer[len-1] = '\0';
            len--;
        }
}

int cerca(String _str, String _word){
	int i=0, j=0, trovata=0;
	
	while( _str[i]!='\0' && _word[j]!='\0' && !trovata){
		while( _str[i] == _word[j] &&  _word[j]!='\0'){
			i+=1; j+=1;
		}
		
		if ( _word[j] =='\0')
			trovata=1;
		else
			trovata=0;		
		i+=1; j=0;
	}
	
	return trovata;
}
int main(){
	int n, len;
	String stringa = (String)malloc (sizeof(stringa) * sizeof(char));
	if (stringa == NULL) return 1;
	printf("Inserisci una parola o frase: ");
	fgets(stringa, 50, stdin); 
	len = strlen(stringa);
	compatta(stringa,len);
	//inserisci la parola
	String parola = (String)malloc (sizeof(parola) * sizeof(char));
	if (parola == NULL) return 1;
	printf("Inserisci una parola o frase: ");
	fgets(parola, 50, stdin);
	len = strlen(parola);
	compatta(parola,len);
	
	n = cerca (stringa,parola);
	if(n)
		printf("\nParola trovata");
	else
		printf("\nParola non trovata");
}