#include <iostream>

using namespace std;

// Function to calculate (base^exponent) % modulus
long long mod_pow(long long base, long long exponent, long long modulus) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        exponent /= 2;
    }
    return result;
}

int main() {
    // Read input
    long long n;
    cin >> n;

    // Calculate and print the result
    long long result = mod_pow(5, n, 100);
    printf("%02lld\n", result);

    return 0;
}
