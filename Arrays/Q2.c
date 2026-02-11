// Sort an array in Descending Order (Bubble Sort)

#include <stdio.h>
int main(){
    int arr[5] = {1, 5, 7, 2, 9};
    int temp;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4 - i; j++){
            if (arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}