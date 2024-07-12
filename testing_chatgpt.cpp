#include <iostream>
using namespace std;

const int MOD = 1000000007; // Define the modulus as a constant

typedef long long ll;

ll powerMod(ll a, ll m, ll mod) {
    if (m == 0) return 1; // Base case: a^0 ≡ 1 (mod mod)
    ll p = powerMod(a, m / 2, mod);
    p = (p * p) % mod; // (p^2) % mod

    if (m % 2 == 0) {
        return p;
    } else {
        return (p * a) % mod; // If m is odd, multiply by a once more
    }
}

ll inverseModular(ll a, ll mod) {
    return powerMod(a, mod - 2, mod); // Fermat's little theorem
}

int main() {
    int a = 2;
    cout << "Modular multiplicative inverse of " << a << " under modulo " << MOD << " is " << inverseModular(a, MOD) << endl;
    return 0;
}
