// Find Sum of All Odd Elements in 1D Array

#include <stdio.h>
int main(){
    int arr[100], n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <n; i++){
        if(arr[i] % 2 != 0)
        sum += arr[i];
    }

    printf("Sum of odd elements are: %d", sum);
    
    return 0;
}