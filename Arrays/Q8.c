// Display Elements Present in Even Location

#include<stdio.h>
int main(){
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Elements at even locations are: ");
    for (int i = 0; i < n; i += 2){
        printf("%d ", arr[i]);
    }

    return 0;
}