// Write a program in C to demonstrate Linear search in 1D array.

#include <stdio.h>
int main(){
    int arr[100], n, key, found = 0, position = -1;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched for: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++){
        if(arr[i] == key){
            found = 1;
            position = i+1;
            break;
        }
    }
    
    if (found)
        printf("Element %d found at position %d", key, position);
    else
        printf("Element %d not found in the array", key);

    return 0;
}