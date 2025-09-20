#include <stdio.h>
int main() {
    static int count = 1;  // keeps track of how many times main is called
    printf("Call %d to main\n", count++);
    if (count <= 5) {
        main();  // recursive call to main
    }
    return 0;
}
