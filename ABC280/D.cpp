#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

vector<int> simple_sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    vector<int> primes;

    for (int i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
};


int main() {
    int n = 20000000;
    ll k;
    cin >> k;
    vector<int> primes = simple_sieve(n);

    int ans = -1;
    for (int prime : primes) {
        if(k % prime == 0){
            ans = prime;
            while(k % prime == 0) k /= prime;
        }
    }
    if(k == 1) cout << ans << endl;
    else cout << k << endl;
    return 0;
}
