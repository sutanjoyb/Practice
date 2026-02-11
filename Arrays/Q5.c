// Write a program in C to search an element in 1D array using Binary search technique

#include<stdio.h>
int main(){
    int arr[100], key, n, found = 0;
    int low = 0, high, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched for: ");
    scanf("%d", &key);

    high = n - 1;
    while (low <= high){
        mid = (low + high) / 2;

        if (arr[mid] == key){
            found = 1;
            break;
        }

        else if(arr[mid] < key){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    if (found)
        printf("Element %d found at position %d", key, mid + 1);
    else
        printf("Element %d not found in the array", key);
    
    return 0;
}