#include <stdio.h>
#include <math.h>

int is_prime(long n) {
    if (n <= 1) {
        return 0;
    }

    if (n <= 3) {
        return 1;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }

    long i;
    for (i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}

long largest_prime_factor(long n) {
    long largest = -1;

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    long i;
    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 2) {
        largest = n;
    }

    return largest;
}

int main() {
    long number = 612852475143;
    long largest = largest_prime_factor(number);

    printf("%ld\n", largest);

    return 0;
}

