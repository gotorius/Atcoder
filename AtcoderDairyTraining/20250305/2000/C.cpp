#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    vector<P> a;
    rep(i,n){
        int cnt = 0;
        rep(j,n){
            if(s[i][j] == 'x') cnt++;
        }
        a.emplace_back(cnt,i);
    }
    sort(a.begin(),a.end());
    rep(i,n){
        cout << a[i].second+1 << ' ';
    }
    cout << endl;
    return 0;


}