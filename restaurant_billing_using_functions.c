#include <stdio.h>

// Function to calculate discount
float calculateDiscount(float amount) {
    if (amount >= 1000)
        return amount * 0.1;   // 10% discount
    else if (amount >= 500)
        return amount * 0.05;  // 5% discount
    else
        return 0;
}

// Function to calculate tax
float calculateTax(float amount) {
    return amount * 0.18;  // 18% GST
}

// Function to calculate final bill
float calculateFinalBill(float amount) {
    float discount = calculateDiscount(amount);
    float tax = calculateTax(amount - discount);
    return (amount - discount) + tax;
}

int main() {
    float billAmount, finalBill;

    printf("Enter total bill amount: ");
    scanf("%f", &billAmount);

    finalBill = calculateFinalBill(billAmount);

    printf("\n--- Restaurant Bill ---\n");
    printf("Original Amount : %.2f\n", billAmount);
    printf("Final Payable   : %.2f\n", finalBill);

    return 0;
}
