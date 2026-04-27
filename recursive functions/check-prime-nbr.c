#include <stdio.h>
#include <stdbool.h>

// Recursive function to check prime
bool isPrime(int n, int i) {
    if(n <= 2)                // If n is 2, it's prime
        return (n == 2) ? true : false;
    if(n % i == 0)            // If divisible by i, not prime
        return false;
    if(i * i > n)             // If i squared > n, no divisors found
        return true;
    return isPrime(n, i + 1); // Check next divisor
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num, 2))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
