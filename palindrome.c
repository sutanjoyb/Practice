#include <stdio.h>
int main(){
	int num, rev = 0, origin;
	printf("Enter a No.: ");
	scanf("%d", &num);
	origin = num;

	while (num != 0){
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	if (rev == origin)
		printf("It is Palindrome");
	else
		printf("It is not Palindrome");
	return 0;
}
