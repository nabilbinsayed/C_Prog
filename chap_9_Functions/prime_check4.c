// NOT MY CODE  

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_N 1000000007  // Upper limit

// Sieve of Eratosthenes function
long long sieve_count_primes(long long n) {
    if (n < 2) return 0; // No primes below 2

    bool *is_prime = (bool *)malloc((n + 1) * sizeof(bool));
    if (!is_prime) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    // Initialize all numbers as prime
    for (long long i = 0; i <= n; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime

    // Sieve algorithm
    for (long long p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (long long j = p * p; j <= n; j += p) {
                is_prime[j] = false;
            }
        }
    }

    // Count prime numbers
    long long count = 0;
    for (long long i = 2; i <= n; i++) {
        if (is_prime[i]) count++;
    }

    free(is_prime); // Free memory
    return count;
}

int main() {
    long long x;
    printf("Enter an integer: ");
    scanf("%lld", &x);

    printf("Calculating number of primes up to %lld...\n", x);
    long long prime_count = sieve_count_primes(x);
    printf("The number of primes till %lld is %lld\n", x, prime_count);

    return 0;
}
