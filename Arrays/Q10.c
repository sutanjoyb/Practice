// Count Positive, Negative and Zero Elements

#include <stdio.h>
int main(){
    int arr[100], n, pstve = 0, ngtve = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if (arr[i] > 0)
        pstve++;
        else if (arr[i] < 0)
        ngtve++;
        else
        zero++;
    }

    printf("The positive elements are: %d\n", pstve);
    printf("The negative elements are: %d\n", ngtve);
    printf("The zero elements are: %d\n", zero);

    return 0;
}