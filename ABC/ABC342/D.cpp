#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

// エラトステネスの篩を実行する関数
vector<int> eratosthenesSieve(int n) {
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
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<map<int,int>> x(n);
    rep(i,n){
        vector<int> b = eratosthenesSieve(a[i]);
        rep(j,b.size()){
            if(a[i] == 1) break;
            if(a[i] % b[j] == 0){
                a[i] /= b[j];
                if(x[i].find(b[j]) == x[i].end()){
                    x[i][b[j]]++;
                }else if(x[i].find(b[j]) != x[i].end()){
                    x[i][b[j]]++;
                }
            }
        }
    }
   
}