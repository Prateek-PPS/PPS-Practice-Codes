#include <stdio.h>

int main() {
    int marks = 72;
    char grade = (marks >= 50) ? 'P' : 'F';
    printf("Result: %c\n", grade);
    return 0;
}
