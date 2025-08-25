#include <stdio.h>
int main() {
    int choice;
    printf("Restaurant Menu:\n");
    printf("1. Burger - Rs: 500\n");
    printf("2. Pizza - Rs: 800\n");
    printf("3. Pasta - Rs: 600\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("You ordered Burger. Pay Rs: 500\n"); break;
        case 2: printf("You ordered Pizza. Pay Rs: 800\n"); break;
        case 3: printf("You ordered Pasta. Pay Rs: 600\n"); break;
        case 4: printf("Exiting... Thank you!\n"); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}
