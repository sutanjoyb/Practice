// Display All Odd Elements in 1D Integer Array

#include <stdio.h>
int main(){
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Odd Elements are: ");
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 != 0)
        printf("%d ", arr[i]);
    }

    return 0;
}