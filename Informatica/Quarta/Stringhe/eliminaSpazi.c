/* Eliminare gli spazi da una stringa */
//Data una stringa eliminare gli spazi
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* String;

void eliminaSpazi(String s){
	int i,j;
	for(i=0; s[i]!='\0'; i++){
		if (s[i]==' '){
			for(j=i; s[j] != '\0'; j++){
				s[j]=s[j+1];
			}			
			s[j]='\0';
		}
	}
}


int main(){
	String s = (String)malloc (50 * sizeof(char));
	if (s == NULL) return 1;
	
	printf("Inserisci una stringa: ");
	fgets(s, 50, stdin);
	eliminaSpazi(s);
	printf("\n%s", s);		
}