/*
Si scriva un programma in linguaggio C che
letto un numero intero positivo dallo standard
input, visualizzi a terminale il quadrato del
numero stesso facendo uso soltanto di
operazioni di somma.
• Si osservi che il quadrato di ogni numero
intero positivo N può essere costruito
sommando tra loro i primi N numeri dispari.
• Esempio: N = 5; N2 = 1 + 3 + 5 + 7 + 9 = 25.
*/
#include <stdio.h>

void quadrato(int *_num, int *_somma);

int main(){
    int num, somma=0;

    do{
        printf("Inserisci un numero: ");
        scanf("%d",&num);
    }while(num<0);

    quadrato(&num,&somma);
    printf("Il quadrato di %d vale: %d ", num, somma);
}
void quadrato(int *_num, int *_somma){
    int dispari=1;

    for(int i=1; i<=*_num; i++){
        printf("%d\t", dispari);
        *somma +=dispari;
        dispari+=2;
        
    }
}