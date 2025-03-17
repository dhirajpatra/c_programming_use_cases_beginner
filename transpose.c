
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

    // matrix t_a for transpose
    int t_row = col;
    int t_col = row;
    int t_a[t_row][t_col];
    
    // input matrix a values
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // print matrix a
    for(int i = 0; i<row; i++){
        printf("\n");
        for(int j=0; j< col; j++) {
            printf("%d", a[i][j]);
        }
    }

    // transpose matrix a
    for(int i = 0; i<row; i++){
        for(int j=0; j< col; j++) {
            // transpose a to t_a by swapping row and col
            t_a[j][i] = a[i][j];
        }
    }

    // print matrix t_a
    for(int i = 0; i<t_row; i++){
        printf("\n");
        for(int j=0; j< t_col; j++) {
            printf("%d", t_a[i][j]);
        }
    }

    return 0;
}