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
    int isolated;
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

    for( i = 0; i<N; i++){
        nol = 0;
        for( j = 0; j<N; j++){
            if(matrix[i][j] == 0){
                nol++;
            }
        }
        if(nol == N){
            printf("ISOLATED %d", i);
        }
    }    
    
    if(nol == 0){
        printf("ISOLATED NONE");

    }
}

/*
4 0 1 1 0 1 0 1 0 1 1 0 0 0 0 0 0

4
0 1 1 0
1 0 1 0
1 1 0 0
0 0 0 0
*/
