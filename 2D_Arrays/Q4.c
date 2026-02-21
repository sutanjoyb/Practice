// Max valued element in a row

#include <stdio.h>
int main() {
    int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};
    int row = 1;  // choose row index

    int max = arr[row][0];
    for(int j=1; j<3; j++) {
        if(arr[row][j] > max)
            max = arr[row][j];
    }

    printf("Max element in row %d = %d", row, max);
    return 0;
}