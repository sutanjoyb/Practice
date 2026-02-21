// Highest valued element in right diagonal

#include <stdio.h>
int main() {
    int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};
    int max = arr[0][2];

    for(int i=1; i<3; i++)
        if(arr[i][2-i] > max)
            max = arr[i][2-i];

    printf("Highest in Right Diagonal = %d", max);
    return 0;
}