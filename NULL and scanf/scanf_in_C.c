#include <stdio.h>
int main() {
    char ch;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a character: ");
    scanf(" %c", &ch);  // no space before %c

    printf("Number = %d, Character = %c\n", num, ch);
    return 0;
}
