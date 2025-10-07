#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> l(n);
    map<int,string> mp;
    rep(i,n){
        cin >> s[i];
        l[i] = s[i].size();
        mp[l[i]] = s[i];
    }
    sort(l.begin(),l.end());
    rep(i,n){
        cout << mp[l[i]];
    }
    return 0;
}
