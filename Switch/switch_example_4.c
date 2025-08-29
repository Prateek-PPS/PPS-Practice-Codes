#include <stdio.h>
int main() {
    int choice, balance = 5000, amount;
    printf("ATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Your balance = %d\n", balance);
            break;
        case 2:
            printf("Enter deposit amount: ");
            scanf("%d", &amount);
            balance += amount;
            printf("New balance = %d\n", balance);
            break;
        case 3:
            printf("Enter withdraw amount: ");
            scanf("%d", &amount);
            if(amount <= balance) {
                balance -= amount;
                printf("Withdraw successful! New balance = %d\n", balance);
            } else {
                printf("Insufficient funds!\n");
            }
            break;
        case 4:
            printf("Thank you for using ATM!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
