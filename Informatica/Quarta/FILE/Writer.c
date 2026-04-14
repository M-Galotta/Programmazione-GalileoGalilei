/* Aprire/Creare un file binario */
#include <stdio.h>

int main() {
    FILE *fp = fopen("/workspaces/Programmazione-GalileoGalilei/Informatica/Quarta/FILE/numeri.dat", "wb");
    int numeri[3] = {10, 20, 30};
	
	if (fp == NULL) {
        printf("Errore apertura file\n");
        return 1;
    }
    fwrite(numeri, sizeof(int), 3, fp);

    fclose(fp);
    return 0;
}