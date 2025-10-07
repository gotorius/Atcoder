#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    if(n < k) cout << 1 << endl;
    else{
        ll sum = 0;
        rep(i,k){
            a[i] = 1;
            sum++;
        }
        a[k] = sum;
        for(int i = k+1; i < n; i++){
            a[i] = sum - a[n-i];
            sum += a[i];
        }
        cout << a[n-1]/1e9 << endl;
        return 0;
    }
    return 0;

}