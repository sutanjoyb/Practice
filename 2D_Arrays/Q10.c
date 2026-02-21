// Highest valued element in left diagonal

#include <stdio.h>
int main() {
    int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};
    int max = arr[0][0];

    for(int i=1; i<3; i++)
        if(arr[i][i] > max)
            max = arr[i][i];

    printf("Highest in Left Diagonal = %d", max);
    return 0;
}