#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
//ACL
#include <atcoder/all>
using namespace atcoder;

int main(void){
    int n, m;
    cin >> n >> m;
    dsu uf(n);
    rep(i,m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        uf.merge(a, b);
    }
    
}