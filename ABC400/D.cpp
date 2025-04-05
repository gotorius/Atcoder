#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n;
    cin >> n;
    unordered_set<ll> st;

    for (int a = 1; (1LL << a) < n; a++) {
        ll p2a = 1LL << a;
        ll max_b = sqrtl(n / p2a);
        for (ll b = 1; b <= max_b; b++) {
            st.insert(p2a * b * b);
        }
    }
    cout << st.size() << endl;
    return 0;
}