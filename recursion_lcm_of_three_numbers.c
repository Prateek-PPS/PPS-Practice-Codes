#include <stdio.h>

// Function to find GCD of two numbers recursively
int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find LCM of two numbers using GCD
int lcm_two(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to find LCM of three numbers recursively
int lcm_three(int a, int b, int c) {
    int lcm_ab = lcm_two(a, b);      // LCM of first two numbers
    return lcm_two(lcm_ab, c);       // LCM of (LCM of first two) and third
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("LCM of %d, %d, %d is %d\n", x, y, z, lcm_three(x, y, z));
    return 0;
}
