#include <stdio.h>

int main() {
    int choice;
    do {
        printf("Menu:\n");
        printf("1. Add\n");
        printf("2. Delete\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 3) {
            printf("Invalid choice, please try again.\n");
        }
    } while (choice < 1 || choice > 3);

    printf("You chose option %d\n", choice);

    return 0;
}
