#include <stdio.h>
#define  N 4

void riempiMat(int mat[][N]){
    int num=0, i;
    int top=0,bottom=N-1;
    int left=0, right= N-1;

    while(num<= N*N){
        //sinistra verso destra
        for(i=left; i<=right; i++)
            mat[top][i ]= num+1;
        top++;
        //alto verso il basso
        for(i=top; i<=bottom; i++)
            mat[i][right]=num+1;
        right--;
        //destra verso sinistra
        for(i=right; i>=left; i--)
            mat[bottom][i]=num+1;
        bottom--;
        //basso verso l'alto
        for(i=bottom; i>=top; i--)
            mat[i][left]=num+1;
        left++;


    }

}



int main(){
    int mat[N][N];

    riempiMat(mat);
    printf("La matrice a spirale è: ");
    stampaMat(mat);
}