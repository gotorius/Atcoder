#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

ll round_number(ll X, int K) {
    ll power = 1;
    for (int i = 0; i < K; i++) {
        power *= 10;
        X = (X + power / 2) / power * power;
    }
    return X;
}

int main() {
    ll X;
    int K;
    cin >> X >> K;
    
    cout << round_number(X, K) << endl;
    
    return 0;
}
