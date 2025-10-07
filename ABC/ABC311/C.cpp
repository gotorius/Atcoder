#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    rep(i,n) cin >> a[i+1];

    int v = 1;
    rep(i,n) v = a[v];
    int sv = v;
    vector<int> ans;
    do{
        ans.push_back(v);
        v = a[v];
    }while(v != sv);

    cout << ans.size() << endl;
    for(int v : ans) cout << v << ' ';
    cout << endl;
    return 0;
   
}
