/* Letture di un file binario esistente */
#include <stdio.h>

int main() {
    FILE *fp = fopen("numeri.dat", "rb");
    int numeri[3],i;
    
    if (fp == NULL) {
        printf("Errore apertura file\n");
        return 1;
    }
    fread(numeri, sizeof(int), 3, fp);

    for(i = 0; i < 3; i++) {
        printf("%d\n", numeri[i]);
    }

    fclose(fp);
    return 0;
}