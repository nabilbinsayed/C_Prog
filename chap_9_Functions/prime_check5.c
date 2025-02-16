// wrong code, not my code, fy gpt
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Regular Sieve of Eratosthenes to find small primes up to sqrt(n)
void simple_sieve(long long limit, bool *is_prime, long long *primes, long long *prime_count) {
    for (long long i = 0; i <= limit; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime

    for (long long p = 2; p * p <= limit; p++) {
        if (is_prime[p]) {
            for (long long i = p * p; i <= limit; i += p) {
                is_prime[i] = false;
            }
        }
    }

    *prime_count = 0;
    for (long long i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes[(*prime_count)++] = i;
        }
    }
}

// Segmented Sieve to count primes in large ranges
long long segmented_sieve(long long n) {
    if (n < 2) return 0;

    long long limit = sqrt(n) + 1;
    bool *is_prime = (bool *)malloc((limit + 1) * sizeof(bool));
    long long *primes = (long long *)malloc(limit * sizeof(long long));
    long long prime_count = 0;

    simple_sieve(limit, is_prime, primes, &prime_count);
    free(is_prime);

    long long low = limit, high = 2 * limit;
    long long count = prime_count;

    while (low <= n) {
        if (high > n) high = n + 1;

        bool *mark = (bool *)malloc((high - low + 1) * sizeof(bool));
        for (long long i = 0; i < (high - low + 1); i++) mark[i] = true;

        for (long long i = 0; i < prime_count; i++) {
            long long p = primes[i];
            long long start = (low / p) * p;
            if (start < low) start += p;
            if (start == p) start += p;

            for (long long j = start; j < high; j += p) {
                mark[j - low] = false;
            }
        }

        for (long long i = 0; i < (high - low); i++) {
            if (mark[i]) count++;
        }

        free(mark);
        low += limit;
        high += limit;
    }

    free(primes);
    return count;
}

int main() {
    long long x;
    printf("Enter an integer: ");
    scanf("%lld", &x);

    printf("Calculating number of primes up to %lld...\n", x);
    long long prime_count = segmented_sieve(x);
    printf("The number of primes till %lld is %lld\n", x, prime_count);

    return 0;
}
