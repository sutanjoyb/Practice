#include <stdio.h>
int main(){
	int arr[100];
	int n;
	int sum = 0;
	float average;
	printf("Enter no. of elements: \n");
	scanf("%d", &n);
	printf("Enter array elements: \n");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	average = (float)sum / n;
	printf("Sum = %d\n", sum);
	printf("Average = %.2f\n", average);
	return 0;
}
