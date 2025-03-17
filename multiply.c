
#include <stdio.h>

int main() {
    // matrix a
    int row;
    int col;
    int i, j, k;

    // take input for row and col
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter col: ");
    scanf("%d", &col);
    int a[row][col];

    // matrix b
    int b[col][row];

    // to hold sum of matrix a and b
    int mul[row][row];
    
    // input matrix a values
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++) {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // input matrix b values
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++) {
            printf("Enter value for b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    // print matrix a
    printf("\nMatrix A: ");
    for(i = 0; i<row; i++){
        printf("\n");
        for(j=0; j< col; j++) {
            printf("%d\t", a[i][j]);
        }
    }

    // print matrix b
    printf("\nMatrix B: ");
    for(i = 0; i<col; i++){
        printf("\n");
        for(j=0; j< row; j++) {
            printf("%d\t", b[i][j]);
        }
    }

    // Initialize the result matrix to 0 this is called dynamic memory allocation
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            mul[i][j] = 0;
        }
    }


    // multiplication matrix a and b
    for(i = 0; i<row; i++){
        for(j=0; j<row; j++) {
            for(k = 0; k < col; k++) {
                // multiply a rows elemet with b cols element and sum them
                printf("\nMultiplying a[%d][%d] and b[%d][%d]", i, k, k, j);
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // print matrix mul
    printf("\nMatrix Multiplication: ");
    for(i = 0; i<row; i++){
        printf("\n");
        for(j=0; j< row; j++) {
            printf("%d\t", mul[i][j]);
        }
    }

    return 0;
}