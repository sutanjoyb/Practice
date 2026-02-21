// To calculate the diagonal sums

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

    // ---- Diagonal Sums (Only if square matrix) ----
    if(rows == cols) {
        int primarySum = 0, secondarySum = 0;

        for(int i = 0; i < rows; i++) {
            primarySum += arr[i][i];              // Main diagonal
            secondarySum += arr[i][cols-1-i];     // Secondary diagonal
        }

        printf("\nPrimary Diagonal Sum = %d\n", primarySum);
        printf("Secondary Diagonal Sum = %d\n", secondarySum);
    } else {
        printf("\nDiagonal sums not possible (Matrix is not square).\n");
    }

    return 0;
}

// Print left diagonal elements (Primary diagonal)
            // #include <stdio.h>
            // int main() {
            //     int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};

            //     printf("Left Diagonal Elements:\n");
            //     for(int i=0; i<3; i++)
            //         printf("%d ", arr[i][i]);

            //     return 0;
            // }

// Print right diagonal elements (Secondary diagonal)
            //#include <stdio.h>
            // int main() {
            //     int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};

            //     printf("Right Diagonal Elements:\n");
            //     for(int i=0; i<3; i++)
            //         printf("%d ", arr[i][2-i]);

            //     return 0;
            // }