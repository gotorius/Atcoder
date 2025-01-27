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

ll f(ll x, ll y){
    int cnt = 0;
    while(x % y == 0){
        x /= y;
        cnt++;
    }
    return cnt;    
};

int main() {
    ll n = 1e7;
    ll k;
    cin >> k;
    vector<ll> primes = simple_sieve(n);

    ll ans = -1;
    ll cnt = 1;
    for (ll prime : primes) {
        if(k % prime == 0){
            ans = prime;
            ll k1 = k;
            rep(i,f(k1,prime)) cnt *= prime;
        }
    }
    if(cnt == k) cout << ans << endl;
    else cout << k << endl;
    return 0;
}
