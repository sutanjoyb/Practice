#include <stdio.h>
int main(){
	char operator;
	double num1, num2, result;

	printf("Hey! Chaliye Shuru Karte Hain!..\n");
	printf("Choose operation to perform: \n");
	printf("+ for Addition\n");
	printf("- for Subtraction\n");
	printf("* for Multiplication\n");
	printf("/ for Division\n");

	printf("Enter an operator to perform: ");
	scanf("%c", &operator);

	printf("Enter first no.: \n"); 
	scanf("%lf", &num1);
	printf("Enter second no.: \n");
	scanf("%lf", &num2);

	switch (operator){
		case '+':
			result = num1 + num2;
			printf("Result: %.2lf\n", result);
			break;
		case '-':
			result = num1 - num2;
			printf("Result: %.2lf\n", result);
			break;
		case '*':
			result = num1 * num2;
			printf("Result: %.2lf\n", result);
			break;
		case '/':
			if (num2 != 0){
				result = num1 / num2;
				printf("Result: %.2lf\n", result);
			}
			else{
				printf("Error: Division by zero is not allowed!\n");
			}
			break;
		default:
			printf("Invalid Operator Selected.\n");
	}
	return 0;
}
