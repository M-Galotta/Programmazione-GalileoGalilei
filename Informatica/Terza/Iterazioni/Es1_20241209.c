/* PROGETTATE UN ALGORITMO CHE LEGGA UN NUMERO b<a E SCRIVA QUANTE VOLTE 
    a è DIVISIBILE PER b. 
    ES: a=162 e b =3  a è DIVISIBILE 4 VOLTE PER b
*/
#include <stdio.h>
int main(){
    int a,b,q,r;
    int cont=0;

    do{
        printf("Inserisci il valore a: ");
        scanf("%d", &a);
        printf("Inserisci il valore b: ");
        scanf("%d", &b);
    }while(a<b);

    q=a;
    while(q>b && r==0){
        if(q%b==0){
            r=q%b;
            cont++;
            q=q/b;
        }
    }
    
    

}