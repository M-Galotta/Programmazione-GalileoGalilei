#include <stdio.h>
#include <string.h>

int main() {
    // Dichiarazione di due stringhe
    char str1[100] = "Ciao";
    char str2[100] = " Mondo!";

    // 1. strlen() - Lunghezza della stringa
    printf("Lunghezza di str1: %lu\n", strlen(str1));
    printf("Lunghezza di str2: %lu\n\n", strlen(str2));

    // 2. strcat() - Concatenazione di due stringhe
    strcat(str1, str2);
    printf("Dopo strcat, str1 = %s\n\n", str1);

    // 3. strcpy() - Copia di una stringa
    char copia[100];
    strcpy(copia, str1);
    printf("Copia di str1: %s\n\n", copia);

    // 4. strcmp() - Confronto tra stringhe
    int confronto = strcmp(str1, copia);
    if (confronto == 0)
        printf("str1 e copia sono uguali\n\n");
    else
        printf("str1 e copia sono diverse\n\n");

    // 5. strchr() - Ricerca di un carattere in una stringa
    char *pos = strchr(str1, 'M');
    if (pos != NULL)
        printf("Il carattere 'M' si trova alla posizione: %ld\n\n", pos - str1);
    else
        printf("Il carattere 'M' non è stato trovato.\n\n");

    return 0;
}
