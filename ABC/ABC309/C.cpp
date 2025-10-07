#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    map<ll,ll> x;
    ll bsum = 0;

    rep(i,n){
        cin >> a[i] >> b[i];
        bsum += b[i];
        x[a[i]] += b[i];
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int day = 0;
    rep(i,n){
        if(bsum <= k){
            cout << day+1 << endl;
            return 0;
        }
        day = a[i];
        bsum -= x[a[i]];
    }
}
