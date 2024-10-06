#include <iostream>
#include <cmath>

using namespace std;

bool sieve[1000001];  // Use bool to save memory

int main()
{
    int range;
    cin >> range;

    // Mark all numbers as prime (true), except for 0 and 1
    for (int i = 2; i <= range; i++) {
        sieve[i] = true;
    }

    // Apply the Sieve of Eratosthenes
    for (int i = 2; i <= sqrt(range); i++) {
        if (sieve[i]) {
            // Mark all multiples of i as non-prime (false)
            for (int j = i * i; j <= range; j += i) {
                sieve[j] = false;
            }
        }
    }

    // Output all prime numbers
    for (int i = 2; i <= range; i++) {
        if (sieve[i]) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
