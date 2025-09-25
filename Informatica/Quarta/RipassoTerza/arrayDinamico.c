/*Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeri = NULL;    // array dinamico
    int dimensione = 0;    // quanti elementi ci sono
    int scelta, n, i, j, trovato;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Aggiungi numero\n");
        printf("2. Visualizza numeri\n");
        printf("3. Cerca numero\n");
        printf("4. Ordina numeri (crescente)\n");
        printf("5. Elimina numero\n");
        printf("6. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        if (scelta == 1) {
            // Aggiungi
            printf("Inserisci un numero: ");
            scanf("%d", &n);
            numeri =(int *)realloc(numeri, (dimensione + 1) * sizeof(int));
            if (numeri == NULL) {
                printf("Errore di allocazione!\n");
                return 1;
            }
            numeri[dimensione] = n;
            dimensione++;
            printf("Numero aggiunto!\n");

        } else if (scelta == 2) {
            // Visualizza
            printf("Numeri attuali:\n");
            for (i = 0; i < dimensione; i++)
                printf("%d ", numeri[i]);
            if (dimensione == 0) printf("(nessun numero)");
            printf("\n");

        } else if (scelta == 3) {
            // Cerca
            printf("Numero da cercare: ");
            scanf("%d", &n);
            trovato = 0;
            for (i = 0; i < dimensione; i++) {
                if (numeri[i] == n) {
                    printf("Trovato all'indice %d\n", i);
                    trovato = 1;
                    break;
                }
            }
            if (!trovato) printf("Numero non trovato.\n");

        } else if (scelta == 4) {
            // Ordina (bubble sort)
            for (i = 0; i < dimensione - 1; i++) {
                for (j = 0; j < dimensione - i - 1; j++) {
                    if (numeri[j] > numeri[j+1]) {
                        int tmp = numeri[j];
                        numeri[j] = numeri[j+1];
                        numeri[j+1] = tmp;
                    }
                }
            }
            // Visualizza
            printf("Numeri ordinati:\n");
            for (i = 0; i < dimensione; i++){
            	printf("%d ", numeri[i]);
			}
            printf("\n");

        } else if (scelta == 5) {
            // Elimina
            printf("Numero da eliminare: ");
            scanf("%d", &n);
            trovato = -1;
            for (i = 0; i < dimensione; i++) {
                if (numeri[i] == n) {
                    trovato = i;
                    break;
                }
            }
            if (trovato != -1) {
                for (i = trovato; i < dimensione - 1; i++)
                    numeri[i] = numeri[i+1];
                dimensione--;
                numeri = realloc(numeri, dimensione * sizeof(int));
                printf("Numero eliminato.\n");
            } else {
                printf("Numero non trovato.\n");
            }
        }

    } while (scelta != 6);

    free(numeri);
    printf("Programma terminato.\n");
    return 0;
}