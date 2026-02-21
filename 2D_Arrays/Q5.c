// Max valued element in a column

#include <stdio.h>
int main() {
    int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};
    int col = 1;  // choose column index

    int max = arr[0][col];
    for(int i=1; i<3; i++) {
        if(arr[i][col] > max)
            max = arr[i][col];
    }

    printf("Max element in column %d = %d", col, max);
    return 0;
}