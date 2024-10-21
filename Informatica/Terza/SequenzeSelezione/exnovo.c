
#include <stdio.h>

int main(){
    int a1, m1, g1, a2, m2, g2, bisestile;

    //richiesta della prima data
    printf("inserisci la prima data nel formato g, m, aaaa: ");
    scanf("%d%d%d", &g1, &m1, &a1);
    printf("%d/%d/%d", g1,m1,a1);
    //richiesta della prima data
    printf("\ninserisci la seconda data nel formato g, m, aaaa: ");
    scanf("%d%d%d", &g2, &m2, &a2);
    printf("%d/%d/%d", g2,m2,a2);

    //controllo la prima data
    if(a1%100==0){
        if (a1%400==0){
            printf("\nL'a2 è bisestile");
            bisestile=1;
        }
    }
    else{
        if (a1%4==0){
            printf("\nL'a2 è bisestile");
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
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if (g1>=1 && g1<=31){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa data non è accettabile");
    }
//controllo seconda data
    if(a2%100==0){
            if (a2%400==0){
                printf("\nL'anno è bisestile");
                bisestile=1;
            }
        }
        else{
            if (a2%4==0){
                printf("\nL'anno è bisestile");
                bisestile=1;
            }
        }
        //controllo del m2 e del g2
        if (m2>=1 && m2 <=12){
            if (m2==2){
                if(g2>=1 && g2<=28+bisestile){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if( m2==11 || m2==4 || m2==6 || m2==9){
                    if (g2>=1 && g2<=30){
                        printf("\nLa data è accettabile");
                    }
                    else{
                        printf("\nLa data non è accettabile");
                    }
                }
                else{
                    if (g2>=1 && g2<=31){
                        printf("\nLa data è accettabile");
                    }
                    else{
                        printf("\nLa data non è accettabile");
                    }
                }
            }
        }
        else{
            printf("\nLa data non è accettabile");
        }
//controlliamo quale data risulta piu' recente
    if(a1>a2)
        printf("\nLa data più recente è: %d/%d/%d ", g1,m1,a1);
    else if(a1==a2){
            if(m1>m2)
                printf("\nLa data più recente è: %d/%d/%d ", g1,m1,a1);
            else if(m1==m2){
                    if(g1>g2)
                        printf("\nLa data più recente è: %d/%d/%d ", g1,m1,a1);
                    else if(g1==g2)
                            printf("\nLe date sono uguali");
                        else
                            printf("\nLa data più recente è: %d/%d/%d ", g2,m2,a2);
            }
                else
    }

}