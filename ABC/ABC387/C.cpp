#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string r;
    ll x;
    cin >> x >> r;
    x--;
    string l = to_string(x);

    ll ls = 0;
    vector<vector<ll>> s(100);
    rep(i,19){
        rep(j,9){
            ls += pow(j+1,i+1);
            s[j+1].push_back(ls);
        }
    }

    ll ans = 0;
    rep(i,r.size()-1){
        int x = r[i] - '0';
        if(x == 0) continue;
        else ans += s[x][r.size()-i-2];
    }

    rep(i,l.size()-1){
        int x = l[i] - '0';
        if(x == 0) continue;
        else ans -= s[x][l.size()-i-2];
    }
    rep(i,18){
        cout << s[2][i] << endl;
    }
    return 0;
}