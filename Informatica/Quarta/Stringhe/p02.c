/* stringhe con malloc */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *buffer; //puntatore alla stringa buffer
    int len;

    printf("Inserisci la lunghezza della stringa: ");
    scanf("%d", &len );

    //alloco lo spazio in memoria della stringa
    buffer = (char *)malloc((len+1) *sizeof(char));
    if(buffer == NULL) return 1;

    printf("Inserisci una stringa: ");
    getchar(); // per consumare l’eventuale '\n' rimasto nel buffer da scanf
    fgets(buffer, len + 1, stdin); // legge fino a len caratteri
    printf("Hai inserito: %s", buffer);

    free(buffer);
    
    return 0;
}