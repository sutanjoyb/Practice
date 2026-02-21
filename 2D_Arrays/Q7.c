// Max valued element in entire 2D array

#include <stdio.h>
int main() {
    int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};
    int max = arr[0][0];

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(arr[i][j] > max)
                max = arr[i][j];

    printf("Maximum element in matrix = %d", max);
    return 0;
}