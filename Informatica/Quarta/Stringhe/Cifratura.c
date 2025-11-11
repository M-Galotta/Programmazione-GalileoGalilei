/* DATA UNA STRINGA INIZIALE E IL FATTORE DI 
CIFRATURA CREARE LA STRINGA CIFARTA */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

string cifra(string str, int key){
    int len = strlen(str);
    int i=0, controllo;
    string tmp = malloc(len*sizeof(char));
    if(tmp == NULL){
        printf("Errore nell'allocazione della memoria.\n");
        exit(1);
    }
    while(str[i] != '\0'){
        controllo = 0;
        if(str[i] + key > 122){
            controllo = 26;
        }
        tmp[i] = str[i] + key - controllo;
        i++;
    }
    return tmp;
}

int main(){
    string stringa = malloc(200*sizeof(char));
    string stringacifrata;
    int fattore;
    printf("Inserisci la stringa: ");
    fgets(stringa, 200, stdin);
    printf("Inserisci il fattore di cifratura: ");
    scanf("%d", &fattore);
    stringacifrata = cifra(stringa, fattore);
    printf("Stringa cifrata: %s\n", stringacifrata);
    free(stringa);
    free(stringacifrata);
    return 0;
}