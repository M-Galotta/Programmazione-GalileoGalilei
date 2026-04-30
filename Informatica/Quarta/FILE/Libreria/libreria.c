/*
CREARE UN PROGRAMMA CHE GESTISCA UNA LIBRERIA DOTATA DI DIVERSI LIBRI TALE 
DA POTER ESEGUIRE LE SEGUENTI OPERAZONI:
- AGGIUNTA/CREAZIONE DELLA LISTA DI LIBRI;
- RICERCA DI UN LIBRO;
- CANCELLAZIONE DI UN LIBRO;
- MODIFICA DELL'ISBN;
- CREARE DUE LISTE SEPARATE IN BASE ALL'ANNO DI PRODUZIONE PRIMA/DOPO 
DEL 2000;
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
      char autore[30];
      char titolo[30];
      char ISBN[20];
      int anno;
}Libro;

int main() {
    int scelta;

    do {
        printf("\nMenu Libreria:\n");
        printf("1. Aggiungi libro\n");
        printf("2. Visualizza elenco libri\n");
        printf("3. Ricerca libro\n");
        printf("4. Elimina libro\n");
        printf("5. Modifica l'isbn di un libro\n");
        printf("6. Separa la lista dei libri in base all'anno(prima/dopo 2000)\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta) {
            case 1:
                aggiungiLibro();
                break;
            case 2:
                visualizzaRubrica();
                break;
            case 3:
                eliminaContatto();
                break;
            case 4:
                separaContatti();
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while(scelta != 0);

    return 0;
}