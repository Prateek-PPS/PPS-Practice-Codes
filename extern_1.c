#include <stdio.h>
int a = 100;          // Definition (memory allocated here)
void display() {
    //extern int a;    // Declaration (no new memory created)
    printf("a = %d\n", a);
}
int main() {
    display();       // Output: a = 10
    return 0;
}
