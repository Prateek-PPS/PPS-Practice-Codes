#include <stdio.h>

// Recursive function to check prime
int isPrime(int n, int i) {
    if (n <= 2)
        return (n == 2) ? 1 : 0;  // 2 is prime, 1 is not
    if (n % i == 0)
        return 0;  // divisible, not prime
    if (i * i > n) //Why? Suppose n = a*b. If both a and b were greater than sqrt(n),
                    // then a * b > n is always true.
                     //Therefore, at least one of the divisors must be <= sqrt(n)
        return 1;  // no divisors found, prime
    return isPrime(n, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num, 2))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
