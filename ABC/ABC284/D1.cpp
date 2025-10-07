#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// エラトステネスの篩で素数リストを生成
vector<int> sieve(ll n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
    return primes;
}

int main() {
    int t;
    cin >> t;
    vector<int> primes = sieve(1e10);

    while (t--) {
        ll n;
        cin >> n;
        bool found = false;

        for (int a = 0; a < primes.size(); a++) {
            ll p = primes[a];
            if (p * p > n) break; // 探索終了条件

            if (n % p == 0) {
                ll x = n / p;
                if (x % p == 0) { // p^2 * q の形を確認
                    ll q = x / p;
                    cout << p << " " << q << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found) cout << -1 << endl;
    }

    return 0;
}
