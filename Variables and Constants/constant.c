#include <stdio.h>

int main() {
     int MAX = 100;
    printf("------------------%d\n", MAX);
    MAX = 200;  // Error: cannot modify a const variable
    printf("------------------%d\n", MAX);
    return 0;
}
