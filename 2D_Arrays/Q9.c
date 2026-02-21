// Second highest valued element in a column

#include <stdio.h>
int main() {
    int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};
    int col = 0;

    int max = arr[0][col], second = -9999;

    for(int i=1; i<3; i++) {
        if(arr[i][col] > max) {
            second = max;
            max = arr[i][col];
        }
        else if(arr[i][col] > second && arr[i][col] != max) {
            second = arr[i][col];
        }
    }

    printf("Second highest in column %d = %d", col, second);
    return 0;
}