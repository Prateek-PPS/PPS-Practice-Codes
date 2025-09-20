#include <stdio.h>

// Function without parameters
void checkBalance() {
    int balance;
    printf("Enter your account balance: ");
    scanf("%d", &balance);

    if (balance >= 1000)
        printf("You have sufficient balance: %d\n", balance);
    else
        printf("Low balance! Please deposit money.\n");
}

int main() {
    printf("--- ATM Balance Checker ---\n");
    checkBalance();  // No parameters passed
    return 0;
}
