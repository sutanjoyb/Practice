#include <stdio.h>
int main(){
	int arr[] = {1, 2, 3, 2, 4, 5, 1, 3};
	int n = 8;
	int isDuplicate = 0;
	printf("Duplicate Elements are : \n");
	for (int i = 0; i < n; i++){
		isDuplicate = 0;
		for (int j = 0; j < i; j++){
			if (arr[i] == arr[j]){
				isDuplicate = 1;
				break;
			}
		}
		if (isDuplicate){
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}
