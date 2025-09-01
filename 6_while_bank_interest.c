/* You deposit Rs. 10,000 in a bank account with 5% annual interest. Each year, the bank adds
interest to your balance. Write a C program using a while loop to calculate how many years it
will take for your balance to exceed Rs. 15,000? */

#include <stdio.h>
int main() {
    double balance = 10000.0;
    int years = 0;
    // Loop until the balance exceeds 15,000
    while (balance <= 15000.0) {
        balance = balance + (balance * 0.05);  // Add 5% interest
        printf("\nBalance: %.4f ", balance);
        years++;
    }
    printf("It will take %d years for the balance to exceed Rs. 15,000.\n", years);
    printf("Final balance after %d years: Rs. %.2f\n", years, balance);
    return 0;
}
