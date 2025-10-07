#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

// エラトステネスの篩
vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false; // 0と1は素数ではない

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
    vector<int> primes = sieve(1e7);

    rep(i,t){
        ll n, now = 0;
        cin >> n;
        rep(a,1e5){
            if(n % primes[a] == 0){
                ll x = n / primes[a];
                auto it = lower_bound(primes.begin(), primes.end(), sqrt(x));
                if(*it == x){
                    cout << *it << " " << primes[a] << endl;
                    break;
                }
            }else if(n % ((ll)primes[a]*primes[a]) == 0){
                ll x = n / (primes[a]*primes[a]);
                auto it = lower_bound(primes.begin(), primes.end(), x);
                if(*it == x){
                    cout << primes[a] << " " << *it << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
