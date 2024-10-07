/* STABILIRE SE UN NUMERO  E' DISPARI 
    CONTROLLANDO L'ULTIMA CIFRA MENO SIGNIFICATIVA */
    #include <stdio.h>

    int main(){
        int num, cifra;
        num=0;
        cifra=0;

        printf("Inserire un numero: ");
        scanf("%d", &num);

        cifra= num%10;
        if(cifra%2==0)
            printf("Il numero %d è pari", num);
        else    
            printf("Il numero %d è dispari", num);
    }