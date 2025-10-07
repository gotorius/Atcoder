#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
    }

    auto dfs = [&](auto dfs, int i, int j, int x, int y){
        if(j == y){
            return x;
        }
        if()
    };


   
}
