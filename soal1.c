/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
* Modul : 5 - Foundation of Algortihm
* Hari dan Tanggal : Rabu, 6 Mei 2026
* Nama File : matrix.c
* Pembuat : Joachim (13224034)
* Deskripsi: cari degree masing masing vertex, max vertex, dan isolated berapa
*/


#include<stdio.h>

int main(){
    int N, i, j;
    int matrix[100][100];
    scanf("%d", &N);
    for( i = 0; i<N; i++){
        for( j = 0; j<N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = 0;
    int isolated = 0;
    int Isolated[100];
    int nol = 0;

    for ( i=0; i<N; i++){
        int degree = 0;
        for( j=0; j<N; j++){
            if(matrix[i][j] == 1){
                degree = degree + 1;
            }
            if(max > degree){
                max = degree;
            }

        }
        printf("DEGREE %d %d\n", i, degree);
    }

    printf("MAX_VERTEX %d\n", max);

    int k =0;
    for( i = 0; i<N; i++){
        nol = 0;
        for( j = 0; j<N; j++){
            if(matrix[i][j] == 0){
                nol++;
            }
        }
        if(nol == N){
            Isolated[k] = i;
            k++;
            isolated++;

        }
    }
    printf("ISOLATED");

    for(int x =0; x<isolated; x++){
        printf(" %d", Isolated[x]);
    }
    
    if(isolated == 0){
        printf(" NONE");
    }
}

/*
4 0 1 1 0 1 0 1 0 1 1 0 0 0 0 0 0

4
0 1 1 0
1 0 1 0
1 1 0 0
0 0 0 0

2 0 1 1 0

3 0 0 0 0 0 0 0 0 0
*/
