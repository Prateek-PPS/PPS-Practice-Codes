#include <stdio.h>
int main() {
    char cont;
    int num;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("You entered %d.\n", num);
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &cont); // Note the space before %c to consume newline
    } while (cont == 'y' || cont == 'Y');
    printf("Input ended.\n");
    return 0;
}
