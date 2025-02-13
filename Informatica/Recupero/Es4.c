/*Dati quattro valori, stampare solo i numeri primi*/

#include <stdio.h>
int main(){

int n;
int cnt=0;



    for (int i = 1; i <= 4; i++)
    {
        do
        {
            printf("inserisci un numero: ");
            scanf("%d",&n);
        } while (n<=0);

            for (int j = 2; j<n; j++)
            {
                if (n%j==0)
                {
                    cnt++;  
                }
                
            }
                if (cnt!=0)
                {
                    printf("%d non e un numero primo!\n",n);
                }else{
                    printf("%d e un numero primo!\n",n);
                }
            cnt=0;
    }

    return 0;
}