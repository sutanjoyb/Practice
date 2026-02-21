// To calculate the sum of columns

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // ---- Sum of Columns ----
    printf("\nSum of Columns:\n");
    for(int j = 0; j < cols; j++) {
        int colSum = 0;
        for(int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Column %d Sum = %d\n", j, colSum);
    }

    return 0;
}