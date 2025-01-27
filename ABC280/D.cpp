#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

vector<ll> simple_sieve(ll limit) {
    vector<bool> is_prime(limit + 1, true);
    vector<ll> primes;

    for (ll i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

vector<ll> segmented_sieve(ll n) {
    ll limit = sqrt(n) + 1;
    vector<ll> primes = simple_sieve(limit);
    vector<ll> result(primes);

    ll low = limit;
    ll high = 2 * limit;

    while (low < n) {
        if (high >= n) high = n;
        vector<bool> mark(high - low + 1, true);

        for (ll i = 0; i < primes.size(); ++i) {
            ll lowLim = max(primes[i] * primes[i], (low + primes[i] - 1) / primes[i] * primes[i]);

            for (ll j = lowLim; j < high; j += primes[i]) {
                mark[j - low] = false;
            }
        }

        for (ll i = low; i < high; ++i) {
            if (mark[i - low]) {
                result.push_back(i);
            }
        }

        low = low + limit;
        high = high + limit;
    }

    return result;
}

int main() {
    ll n = 1e12;
    ll k;
    cin >> k;
    vector<ll> primes = segmented_sieve(n);

    ll ans = 0;
    for (ll prime : primes) {
        if(k % prime) ans = prime;
    }
    cout << ans << endl;
    return 0;
}
