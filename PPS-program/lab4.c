#include <stdio.h>

int main() {
    int rows, cols;
    int a[10][10], b[10][10], sum[10][10], diff[10][10];

    // Taking matrix dimensions
    printf("Enter number of rows and columns (e.g., 2 3): ");
    scanf("%d %d", &rows, &cols);

    // Input elements of the first matrix
    printf("\nEnter first matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    } 

      
    printf("\nEnter second matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

     
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

     
    printf("\nAddition of two matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSubtraction of two matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 

 