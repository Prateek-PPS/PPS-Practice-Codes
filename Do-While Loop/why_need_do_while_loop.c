#include <stdio.h>

int main() {
    int number;

    // Using while loop
    printf("Using while loop:\n");
    printf("Enter a positive number: ");
    scanf("%d", &number);

    while (number <= 0) {
        printf("Invalid input. Please enter a positive number: ");
        scanf("%d", &number);
    }
    printf("You entered: %d\n\n", number);

    // Using do-while loop
    printf("Using do-while loop:\n");
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    printf("You entered: %d\n", number);

    return 0;
}
