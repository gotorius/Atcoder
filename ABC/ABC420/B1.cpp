#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    vector<char> si(m);
    rep(j,m){
        int n0 = 0, n1 = 0;
        rep(i,n){
            if(s[i][j] == '0') n0++;
            else n1++;
        }
        if(n0 == 0 || n1 == 0) si[j] = '2';
        else if(n0 < n1) si[j] = '0';
        else si[j] = '1';
    }
    vector<int> ans(n,0);
    rep(i,n){
        rep(j,m){
            if(si[j] == '2') ans[i]++;
            else if(si[j] == s[i][j]) ans[i]++;
        }
    }
    int cnt = 0;
    rep(i,n) if(cnt < ans[i]) cnt = ans[i];
    rep(i,n) if(cnt == ans[i]) cout << i+1 << ' ';
    cout << endl;
}