#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;

    vector<set<int>> a(n);
    rep(i,m){
        int k;
        cin >> k;
        vector<int> x(k);
        set<int> b;
        rep(i,k){
            cin >> x[i];
            x[i]--;
            b.insert(x[i]);
        }

        rep(i,n){
            if(b.count(i)){
                rep(j,k){
                    a[i].insert(x[j]);
                }
            }
        }
    }
    bool ok = true;
    rep(i,n){
        if(a[i].size() != n) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}