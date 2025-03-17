
#include <stdio.h>

int main() {
    // matrix a
    int row;
    int col;

    // take input for row and col
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter col: ");
    scanf("%d", &col);
    int a[row][col];

    // matrix b
    int b[row][col];

    // to hold sum of matrix a and b
    int sum[row][col];
    
    // input matrix a values
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // input matrix b values
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) {
            printf("Enter value for b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    // print matrix a
    for(int i = 0; i<row; i++){
        printf("\n");
        for(int j=0; j< col; j++) {
            printf("%d", a[i][j]);
        }
    }

    // print matrix b
    for(int i = 0; i<row; i++){
        printf("\n");
        for(int j=0; j< col; j++) {
            printf("%d", b[i][j]);
        }
    }

    // sum matrix a and b
    for(int i = 0; i<row; i++){
        for(int j=0; j< col; j++) {
            // transpose a to t_a by swapping row and col
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // print matrix sum
    for(int i = 0; i<row; i++){
        printf("\n");
        for(int j=0; j< col; j++) {
            printf("%d", sum[i][j]);
        }
    }

    return 0;
}