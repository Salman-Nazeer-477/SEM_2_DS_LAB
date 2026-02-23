#include<stdio.h>

int main(){
    int A[50][50];
    int B[50][50];
    int c, r;
    printf("Enter no. of rows and columns of two matrices:");
    scanf("%d %d", &r, &c);
    printf("Enter Matrix A:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);
    printf("Enter Matrix B:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);
    printf("Matrix C = A - B:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", A[i][j] - B[i][j]);
        }
        printf("\n");
    }
    return 0;
}