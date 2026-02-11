// Write a program in C to reverse elements of an array and store it in same array.

#include<stdio.h>
int main(){
    int arr[100], n, temp;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++){
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}