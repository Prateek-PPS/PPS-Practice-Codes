/* A bank provides loans at a base interest rate of 15%. The bank also offers rebates under the
following conditions:
• 2% rebate if the applicant is from a rural area.
• 2% rebate if the applicant belongs to the below-poverty-line (BPL) category.
• 2% rebate if the loan is taken for agriculture, fishery, or dairy purposes.
Write a C program that reads the details of a person (whether they are from a rural area,
belong to BPL, and the purpose of the loan) and computes the final interest rate applicable to
the loan. */

#include <stdio.h>
int main() {
    float baseRate = 15.0, finalRate;
    char rural, bpl, purpose;
    printf("Base Interest Rate: %.2f%%\n", baseRate);
    // Input whether the applicant is from a rural area
    printf("Is the applicant from a rural area? (y/n): ");
    scanf(" %c", &rural);
    // Input whether the applicant belongs to BPL
    printf("Does the applicant belong to BPL? (y/n): ");
    scanf(" %c", &bpl);
    // Input purpose of the loan
    printf("Is the loan taken for Agriculture/Fishery/Dairy? (y/n): ");
    scanf(" %c", &purpose);
    // Start with base rate
    finalRate = baseRate;
    // Apply rebates
    if (rural == 'y' || rural == 'Y')
        finalRate -= 2.0;
    if (bpl == 'y' || bpl == 'Y')
        finalRate -= 2.0;
    if (purpose == 'y' || purpose == 'Y')
        finalRate -= 2.0;
    // Ensure final rate doesn't go below zero
    if (finalRate < 0)
        finalRate = 0;
    printf("\nFinal Interest Rate applicable: %.2f%%\n", finalRate);
    return 0;
}






