// Second highest valued element in a row

#include <stdio.h>
int main() {
    int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};
    int row = 2;

    int max = arr[row][0], second = -9999;

    for(int j=1; j<3; j++) {
        if(arr[row][j] > max) {
            second = max;
            max = arr[row][j];
        }
        else if(arr[row][j] > second && arr[row][j] != max) {
            second = arr[row][j];
        }
    }

    printf("Second highest in row %d = %d", row, second);
    return 0;
}