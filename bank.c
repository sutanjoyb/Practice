#include <stdio.h>

int main() {
    int choice;
    float amount;
    float balance = 0.0;

menu:
    printf("\nWelcome to your Digital Banking System :)\n");
    printf("Choose any one to Perform:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. View Balance\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter your deposit amount: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("Deposit Successful :)\n");
            printf("Updated Balance: %.2f\n", balance);
            goto menu;

        case 2:
            printf("Enter the withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance) {
                balance = balance - amount;
                printf("Withdrawal Successful :)\n");
                printf("Updated Balance: %.2f\n", balance);
            } else {
                printf("Insufficient Balance.\n");
            }
            goto menu;

        case 3:
            printf("Current Balance: %.2f\n", balance);
            goto menu;

        case 4:
            printf("Thank you for using the banking system.\n");
            break;

        default:
            printf("Invalid Choice. Try again.\n");
            goto menu;
    }

    return 0;
}
