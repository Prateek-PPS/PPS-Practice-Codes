#include <stdio.h>

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside swap function: x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(a, b); // values only copied

    printf("After swapping (in main): a = %d, b = %d\n", a, b);

    return 0;
}
