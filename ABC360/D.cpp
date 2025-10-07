#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    double t;
    string s;
    cin >> n >> t >> s;
    vector<double> x(n);

    map<double, int> mp;
    rep(i,n){
        cin >> x[i];
        if(s[i] == '1') x[i] += t+0.1;
        else x[i] -= t+0.1;
        mp[x[i]] = i;
    }

    int ans = 0;
    sort(x.begin(), x.end());
    rep(i,n){
        if(s[mp[x[i]]] == '1'){
            ans += i-mp[x[i]];
        }
    }
    cout << ans << endl;
    return 0;   
}