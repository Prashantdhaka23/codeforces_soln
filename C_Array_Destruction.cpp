#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int minimizeXORProduct(int a, int b, int n) {
    long long min_xor = 1000000007;
    for (int x = 0; x < (1 << n); ++x) {
        long long xor_product = ((a ^ x) *(b ^ x)) % MOD;
        min_xor = (min_xor < xor_product) ? min_xor : xor_product;
    }
    return min_xor;
}

int main() {
    int a, b, n;
    std::cin >> a >> b >> n;
    
    int ans = minimizeXORProduct(a, b, n);
    
    std::cout << ans << std::endl;
    
    return 0;
}
