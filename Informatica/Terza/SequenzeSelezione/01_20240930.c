/* DATI DUE NUMERI A e B VERIFICARE 
    SE A è IL QUADRATO DI B   */

#include <stdio.h>
 int main(){
    float A=0;
    float B=0;
    float quadrato=0;

    printf("Inserisci il primo valore: ");
    scanf("%f", &A);
    printf("Inserisci il secondo valore: ");
    scanf("%f", &B);

    quadrato = B*B;
    printf("Il doppio è: %f", quadrato);

    if (A == quadrato){
        printf("Il primo valore %f corrisponde al quadrato del secondo %f", A,B);
    }
    else{
        printf("Il primo valore %f non corrisponde al quadrato del secondo %f", A,B);
    }



 }