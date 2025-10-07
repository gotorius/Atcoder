#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(), a.end());
    ll ans = 0;
    ll s = 0, g = n-1;
    while (k > 0 && s < g){
        if(a[g] - a[s+1] < a[g-1] - a[s]) s++;
        else g--;
        k--;
    }
    ans = a[g] - a[s];
    cout << ans << endl;
    return 0;
}