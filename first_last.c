#include <stdio.h>
int main(){
	int i, j, k;
	printf("Enter a Number: ");
	scanf("%d", &i);

	k = i % 10;
	j = i;
	while (j >= 10){
		j /= 10;
	}

	printf("First digit = %d\n", j);
	printf("Last digit = %d\n", k);
return 0;
}
