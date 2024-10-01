/* Verificare se un numero dato in input è divisibile sia per 3 sia per 5
*/

#include <stdio.h>

int main(){
    int n=0;

    printf("Inserire un valore: ");
    scanf("%d", &n);

    if (n%3 == 0){
        if (n%5==0){
            printf("%d è divisibile sia per 3 che per 5", n);
        }
        else{
            printf("%d è divisibile per 3 ma non per 5", n);
        }
    }
    else{
        printf("%d non è divisibile per 3 ", n);
    }
    return 0;
}