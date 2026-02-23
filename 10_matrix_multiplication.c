#include<stdio.h>

int main(){
    int A[50][50];
    int B[50][50];
    int C[50][50];
    int rA, cA, rB, cB;
    printf("Enter no. of rows and columns of matrix A:");
    scanf("%d %d", &rA, &cA);
    printf("Enter no. of rows and columns of matrix B:");
    scanf("%d %d", &rB, &cB);
    if(cA != rB){
        printf("Matrices cannot be multiplied!\n");
        return 1;
    }
    printf("Enter Matrix A:\n");
    for(int i = 0; i < rA; i++)
        for(int j = 0; j < cA; j++)
            scanf("%d", &A[i][j]);
    printf("Enter Matrix B:\n");
    for(int i = 0; i < rB; i++)
        for(int j = 0; j < cB; j++)
            scanf("%d", &B[i][j]);
    for(int i = 0; i < rA; i++){
        for(int j = 0; j < cB; j++){
            C[i][j] = 0;
            for(int k = 0; k < rB; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matrix C = A * B:\n");
    for(int i = 0; i < rA; i++){
        for(int j = 0; j < cB; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}