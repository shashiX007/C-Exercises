//write a code that will show the most basic baic working of an atm machine n need to for any verification etc it just only contain show balance , deposit and withdraw //
#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0;
    float deposit, withdraw;

    do {
        printf("--------ATM MENU---------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is %.2f\n", balance);
                break;

            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%f", &deposit);
                if (deposit > 0) {
                    balance += deposit;
                    printf("Successfully deposited: %.2f\n", deposit);
                } else {
                    printf("Invalid deposit amount\n");
                }
                break;

            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    printf("Successfully withdrew: %.2f\n", withdraw);
                } else {
                    printf("Invalid amount to withdraw\n");
                }
                break;

            case 4:
                printf("Exiting the ATM. Thank you!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
