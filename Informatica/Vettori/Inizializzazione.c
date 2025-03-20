/* INTRODUZIONE AGLI ARRAY
*/
#include <stdio.h>
#define MAX 10
int main(){
    int v[MAX];    //int v[10];

    for(int i=0;i<10; i++){
        v[i] = 1;
        printf("%d\t", v[i]);
    }

    return 0;
}