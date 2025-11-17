/* DATE DUE STRINGHE SCRIVERE LA 
STRINGA IN ALTERNATA
CIAO
CASA
CCIAASOA  */
/* Date due stringhe riportarle in una stringa a caratteri alternati */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char* String;

void compatta(String buffer, int len){

        if(len>0 && buffer[len-1]=='\n'){
            buffer[len-1] = '\0';
            len--;
        }
}

void alterna(String s1, String s2, String s3){
	int i,j=0;
		
	for(i=0; i<strlen(s1) || i<strlen(s2); i++){
    	
    	if(i<strlen(s1)){
    		s3[j]=s1[i];
    		j+=1;
    	}
    	if(i<strlen(s2)){
    		s3[j]=s2[i];
    		j+=1;
    	}
    }
    s3[j]='\0';
}

int main(){
    
    int i,j=0, len;
    String s1 = (String)malloc (50 * sizeof(char)); //prima stringa
	if (s1 == NULL) return 1;
	printf("Inserisci una stringa: ");
	fgets(s1, 50, stdin);
    len = strlen(s1);
	compatta(s1,len);
	
	String s2 = (String)malloc (50 * sizeof(char)); //seconda stringa
	if (s2 == NULL) return 1;
	printf("Inserisci una stringa: ");
	fgets(s2, 50, stdin);
    len = strlen(s2);
	compatta(s2,len);
	
	String s3 = (String)malloc (50 * sizeof(char)); //seconda stringa
	if (s3 == NULL) return 1;
    alterna(s1,s2,s3);
  	
    printf("La parola alternata e\' %s",s3);
    return 0;
}