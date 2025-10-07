#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    vector<P> lr;
    rep(i,n){
        int l,r;
        cin >> l >> r;
        lr.push_back({l,r});
    }

    sort(lr.rbegin(), lr.rend());

    for(auto p : lr){
        auto x = lower_bound(p)
    }
}
