/* INSERITE DUE DATE COMUNICARE LA DATA PIU' RECENTE */

#include <stdio.h>
int main(){
	int a1, a2, g1, g2, m1, m2, bisestile;
	
	//richiesta prima data
	printf("Inserisci la prima data nel formato g m aaaa: ");
	scanf("%d%d%d", &g1, &m1, &a1);
	printf("%d/%d/%d", g1, m1, a1);//stampa di verifica step by step
	//richiesta seconda data
	printf("\nInserisci la seconda data nel formato g m aaaa: ");
	scanf("%d%d%d", &g2, &m2, &a2);
	printf("%d/%d/%d", g2, m2, a2);//stampa di verifica step by step
	//una volta verificati i printf li cancelliamo o li commentiamo
	
	//VERIFICA PRIMA DATA ATTENDIBILE
	if(a1%100==0){
        if (a1%400==0){
            printf("\nL'anno della prima data è bisestile");
            bisestile=1;
        }
    }
    else{
        if (a1%4==0){
            printf("\nL'anno della prima data è bisestile");
            bisestile=1;
        }
    }
    //controllo del m1 e del g1
    if (m1>=1 && m1 <=12){
        if (m1==2){
            if(g1>=1 && g1<=28+bisestile){
                printf("\nLa prima data è accettabile");
            }
            else{
                printf("\nLa prima data non è accettabile");
            }
        }
        else{
            if( m1==11 || m1==4 || m1==6 || m1==9){
                if (g1>=1 && g1<=30){
                    printf("\nLa prima data è accettabile");
                }
                else{
                    printf("\nLa prima data non è accettabile");
                }
            }
            else{
                if (g1>=1 && g1<=31){
                    printf("\nLa prima data è accettabile");
                }
                else{
                    printf("\nLa prima data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa prima data non è accettabile");
    }
    //prima di controllare la seconda data riposiziono la variabile bisestile a 0
    bisestile=0;
    //VERIFICA SECONDA DATA ATTENDIBILE
	if(a2%100==0){
        if (a2%400==0){
            printf("\nL'anno della seconda data è bisestile");
            bisestile=1;
        }
    }
    else{
        if (a2%4==0){
            printf("\nL'anno della seconda data è bisestile");
            bisestile=1;
        }
    }
    //controllo del m1 e del g1
    if (m2>=1 && m2<=12){
        if (m2==2){
            if(g2>=1 && g2<=28+bisestile){
                printf("\nLa seconda data è accettabile");
            }
            else{
                printf("\nLa seconda data non è accettabile");
            }
        }
        else{
            if( m2==11 || m2==4 || m2==6 || m2==9){
                if (g2>=1 && g2<=30){
                    printf("\nLa seconda data è accettabile");
                }
                else{
                    printf("\nLa seconda data non è accettabile");
                }
            }
            else{
                if (g2>=1 && g2<=31){
                    printf("\nLa seconda data è accettabile");
                }
                else{
                    printf("\nLa seconda data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa seconda data non è accettabile");
    }

	//CONTROLLIAMO QUALE DATA E' LA PIU' RECENTE
	if(a1>a2)
		printf("\nLa data %d/%d/%d è quella più recente", g1, m1, a1);
	else{
		if(a1==a2){
			if(m1>m2)
				printf("\nLa data %d/%d/%d è quella più recente", g1, m1, a1);
			else{ 
				if (m1==m2){
					if(g1>g2)
						printf("\nLa data %d/%d/%d è quella più recente", g1, m1, a1);
					else{
						if(g1==g2)
							printf("\nLe date sono uguali");
						else 
							printf("\nLa data %d/%d/%d è quella più recente", g2, m2, a2);
					}
				}
				else
					printf("\nLa data %d/%d/%d è quella più recente", g2, m2, a2);
			}	
		}
		else
			printf("\nLa data %d/%d/%d è quella più recente", g2, m2, a2);
	}
		
}