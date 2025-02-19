#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> k;
    vector<int> g;

    rep(i,n){
        cin >> a[i];
        if(a[i] % 2 == 1) k.push_back(a[i]);
        if(a[i] % 2 == 0) g.push_back(a[i]);
    }
    sort(k.begin(),k.end());
    sort(g.begin(),g.end());

    if(k.size() == 1 && g.size() == 1) cout << -1 << endl;
    else{
        ll gmax = 0;
        ll kmax = 0;
        if(k.size() > 1) kmax = k[k.size()-1]+k[k.size()-2];
        if(g.size() > 1) gmax = g[g.size()-1]+g[g.size()-2];
        cout << max(kmax,gmax) << endl;
    }
    return 0;


}
