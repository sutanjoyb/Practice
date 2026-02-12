// Reverse 1D Array into Another Array

#include <stdio.h>
int main(){
    int n, arr[100], rev[100];

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        rev[i] = arr[n - 1 -i];
    }

    printf("Original Arrays are: ");
    for (int i = 0; i < n; i++){
        printf("%d \n", arr[i]);
    }

    printf("Reversed Arrays are: ");
    for (int i = 0; i < n; i++){
        printf("%d \n", rev[i]);
    }

    return 0;
}
