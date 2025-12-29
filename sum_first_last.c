#include <stdio.h>
int main(){
	int i, j, k;
	printf("Enter a No.: ");
	scanf("%d", &i);

	k = i % 10;
	j = i;
	while (j >= 10){
		j /= 10;
	}

	printf("Sum = %d", j + k);
	return 0;
}
