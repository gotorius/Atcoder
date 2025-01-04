#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

// エラトステネスの篩
vector<int> sieve_of_eratosthenes(int n) {
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

bool is_perfect_square(ll n) {
    if (n < 0) return false;  // 負の数は平方根を持たない
    double sqrt_n = sqrt(n);  // nの平方根を計算
    return sqrt_n == floor(sqrt_n);  // sqrt_nが整数かどうかを確認
}


int main() {
    int t;
    cin >> t;
    vector<int> primes = sieve_of_eratosthenes(100000);

    rep(i,t){
        ll n, now = 0;
        cin >> n;
        while(n % primes[now] != 0 || is_perfect_square(n / primes[now]) == false){
            now++;
        }
        cout << sqrt(n / primes[now]) << ' ' << primes[now] << endl;
    }
    return 0;
}
