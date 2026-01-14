#include <stdio.h>
int main(){
	int arr[] = {2, 3, 5, 3, 2, 3, 3};
	int n = 7;
	int count, maxCount = 0;
	int mostFreq;
	for (int i = 0; i < n; i++){
		count = 0;
		for (int j = 0; j < n; j++){
			if (arr[i] == arr[j]){
				count++;
			}
		}
	if (count > maxCount){
		maxCount = count;
		mostFreq = arr[i];
		}
	}
	printf("Most Frequent No. : %d\n", mostFreq);
	printf("It appears %d times \n", maxCount);
	return 0;
}
