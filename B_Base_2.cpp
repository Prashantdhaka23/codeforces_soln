#include <iostream>
#include <cmath>

int main() {
    int A[64];
    for (int i = 0; i < 64; ++i) {
        std::cin >> A[i];
    }

    long long sum = 0;
    for (int i = 0; i < 64; ++i) {
        sum += A[i] * static_cast<long long>(pow(2, i));
    }

    std::cout << sum << std::endl;

    return 0;
}
