
/*data una stringa contare il numero delle vocalin */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* String;
void compatta(String buffer, int len){

            if(len>0 && buffer[len-1]=='\n'){
                        buffer[len-1] = '\0';
                                    len--;
                                            }
                                            }


int conteggio(String frase){
    int cnt=0;
    for(int i=0; frase[i] != '\0'; i++){
        char c = tolower(frase[i]);
        if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            cnt++;
    }
    return cnt;
}

int main(){
    char buffer[200];
    String frase;
    

    printf("Inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);
    int len = strlen(buffer);
    compatta(buffer,len);
    frase = (String)malloc((len+1)*sizeof(char));
    if(frase==NULL){
        printf("C'è un errore\n");
        return 1;
    }

    strcpy(frase,buffer);

    printf("Il numero delle vocali è: %d", conteggio(frase));

free(frase);
return 0;

}