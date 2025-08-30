#include <stdio.h>

int main() {
    char grade;
    int isLab;

    printf("Enter grade (A/B/C): ");
    scanf(" %c", &grade);

    switch(grade) {
        case 'A':
        case 'B':
            printf("Is it a Lab course? (1=Yes, 0=No): ");
            scanf("%d", &isLab);

            switch(isLab) {
                case 1: printf("Excellent performance in Lab!\n"); break;
                case 0: printf("Good performance in Theory!\n"); break;
                default: printf("Invalid input!\n");
            }
            break;

        case 'C':
            printf("Needs Improvement!\n");
            break;

        default:
            printf("Invalid grade!\n");
    }
    return 0;
}
