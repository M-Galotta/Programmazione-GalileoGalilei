#include <stdio.h>

int main(){

    int num, cifra, pos=1, num_q;

    do{
        printf("Inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=0);   

    num_q=num;
    while(num_q!=0){
        cifra=num_q%10;
        num_q=num_q/10;
        if(cifra==pos)
            printf("\n La cifra %d corrisponde alla sua posizione %d", cifra, pos);
        pos++;
    } 
}