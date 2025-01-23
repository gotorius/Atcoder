#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;

    map<int, bool> mp;
    rep(i,n){
        cin >> a[i];
        c.push_back(a[i]);
        mp[a[i]] = true;
    }

    rep(i,m){
        cin >> b[i];
        c.push_back(b[i]);
        mp[b[i]] = false;
    }

    sort(c.begin(), c.end());

    rep(i,n+m-1){
        if(mp[c[i]] && mp[c[i+1]]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;   
}
