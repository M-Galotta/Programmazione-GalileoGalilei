/*
CREARE UN PROGRAMMA CHE GESTISCA UNA LIBRERIA DOTATA DI DIVERSI LIBRI TALE 
DA POTER ESEGUIRE LE SEGUENTI OPERAZONI:
- AGGIUNTA/CREAZIONE DELLA LISTA DI LIBRI;
- RICERCA DI UN LIBRO;
- MODIFICA DELL'ISBN;
- CANCELLAZIONE DI UN LIBRO;
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
      int anno; //anno di pubblicazione
}Libri;

void aggiungiLibro() {
    FILE *fp = fopen("libreria.dat", "ab"); 
    Libri libro;

    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    printf("Inserisci il nome dell'autore: ");
    scanf(" %[^\n]", libro.autore);
    getchar();
    printf("Inserisci il titolo del libro: ");
    scanf(" %[^\n]", libro.titolo);
    getchar();
    printf("Inserisci il codice isbn: ");
    scanf(" %[^\n]", libro.ISBN);
    getchar();
    printf("Inserisci l'anno di pubblicazione: ");
    scanf("%d", &libro.anno);
    getchar();

    fwrite(&libro, sizeof(Libri), 1, fp);
    fclose(fp);

    printf("Libro aggiunto!\n");
}

void visualizzaLibri(){
    FILE *fp = fopen("libreria.dat", "rb"); 
    Libri libro;

    if (fp == NULL) {
        printf("Libreria vuota!\n");
        return;
    }

    printf("\n--- Libreria ---\n");
    while (fread(&libro, sizeof(Libri), 1, fp) == 1) {
        printf("Nome: %s, Titolo: %s, ISBN: %s, Anno pubblicazione: %d\n", libro.autore, libro.titolo, libro.ISBN, libro.anno);
    }
    fclose(fp);
    printf("---------------\n");
}

void ricercaLibro(){
    FILE *fp = fopen("libreria.dat", "rb");
    Libri libro;
    char _isbn[20];
    int trovato=0;

    if (fp == NULL) {
        printf("Libreria vuota!\n");
        return;
    }

    printf("Inserisci l'ISBN del libro da cercare: \n");
    scanf(" %[^\n]", _isbn);
    getchar();

    while(fread(&libro, sizeof(Libri), 1, fp)==1 && !trovato){
        if( strcmp(_isbn,libro.ISBN)==0 ){
            printf("\nTrovato!!\nNome Autore: %s \nTitolo Libro: %s \nISBN: %s\nAnno pubblicazione: %d", libro.autore, libro.titolo, libro.ISBN, libro.anno);
            trovato = 1;
        }
    }
    if(!trovato)
        printf("\nLibro non trovato.");

    fclose(fp);
}

void modificaLibro(){
    FILE *fp = fopen("libreria.dat", "rb+");
    Libri libro;
    char _isbn[20];
    int trovato=0;

    if (fp == NULL) {
        printf("Libreria vuota!\n");
        return;
    }

    printf("Inserisci l'ISBN del libro da cercare: \n");
    scanf(" %[^\n]", _isbn);
    getchar();

    while(fread(&libro, sizeof(Libri), 1, fp)==1 && !trovato){

        if( strcmp(_isbn,libro.ISBN)==0 ){
            printf("Inserisci il nuovo ISBN del libro da modificare: \n");
            scanf(" %[^\n]", libro.ISBN);
            getchar();
            
            fseek(fp, -sizeof(Libri), SEEK_CUR);
            fwrite(&libro, sizeof(Libri), 1, fp);
            printf("La modifica è stata eseguita.\n");
            trovato=1;
        }
    }
    if(!trovato)
        printf("\nLibro non trovato.");

    fclose(fp);
}

void cancellazioneLibro(){
    FILE *fp = fopen("libreria.dat", "rb");
    FILE *fpTmp = fopen("temp.dat", "wb");
    char _isbn[20];
    Libri libro;

    if (fp == NULL) {
        printf("Libreria vuota!\n");
        return;
    }
    if (fpTmp == NULL) {
        printf("errore sul file temporaneo!\n");
        return;
    }
    printf("Inserisci l'isbn del libro: ");
    scanf(" %[^\n]", _isbn);
    getchar();

    while( fread(&libro, sizeof(Libri), 1, fp) ){
        if ( strcmp(libro.ISBN,_isbn)==0 )
            printf("Trovato!..il libro sarà eliminato.");
        else
            fwrite(&libro, sizeof(Libri), 1, fpTmp);
    }

    fclose(fp);
    fclose(fpTmp);

    fp = fopen("temp.dat", "rb");
    fpTmp = fopen("libreria.dat", "wb");

    while( fread(&libro, sizeof(Libri),1, fp) )
        fwrite(&libro, sizeof(Libri),1, fpTmp);

    fclose(fp);
    fclose(fpTmp);
}

void separazioneLibro(){
    FILE *fp = fopen("libreria.dat", "rb");
    FILE *fpP = fopen("prima.dat", "ab");
    FILE *fpD = fopen("dopo.dat", "ab");
    Libri libro;

    while( fread(&libro, sizeof(Libri), 1, fp) ){
        if( libro.anno<2000 )
            fwrite(&libro, sizeof(Libri),1, fpP);
        else 
            fwrite(&libro, sizeof(Libri),1, fpD);
    }
    fclose(fp);
    fclose(fpP);
    fclose(fpD);

    fpP = fopen("prima.dat", "rb");
    fpD = fopen("dopo.dat", "rb");

    printf("\n --------Libri pubblicati prima del 2000------\n");
    while( fread(&libro, sizeof(Libri), 1, fpP) ){
        printf("Autore: %s, Titolo: %s, Isbn: %s, Anno produzione: %d\n", libro.autore, libro.titolo, libro.ISBN, libro.anno);
    }

    printf("\n --------Libri pubblicati dopo il 2000------\n");
    while( fread(&libro, sizeof(Libri), 1, fpD) ){
        printf("Autore: %s, Titolo: %s, Isbn: %s, Anno produzione: %d\n", libro.autore, libro.titolo, libro.ISBN, libro.anno);
    }
    fclose(fpP);
    fclose(fpD);
}

int main() {
    int scelta;

    do {
        printf("\nMenu Libreria:\n");
        printf("1. Aggiungi libro\n");
        printf("2. Visualizza elenco libri\n");
        printf("3. Ricerca libro\n");
        printf("4. Modifica l'isbn di un libro\n");
        printf("5. Elimina libro\n");
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
                visualizzaLibri();
                break;
            case 3:
                ricercaLibro();
                break;
            case 4:
                modificaLibro();
                break;
            case 5:
                cancellazioneLibro();
                break;
            case 6:
                separazioneLibro();//in base all'anno di porduzione
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while(scelta != 0);

    return 0;
}