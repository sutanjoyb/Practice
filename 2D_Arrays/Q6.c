// Sum of all elements

#include <stdio.h>
int main() {
    int arr[3][3] = {{1,5,3},{9,2,6},{4,8,7}};
    int sum = 0;

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            sum += arr[i][j];

    printf("Sum of all elements = %d", sum);
    return 0;
}