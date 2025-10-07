#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string t;
    cin >> t;
    map<char,int> mp;
    bool ok = true;
    if(t.size() % 2 == 1) ok = false;
    rep(i,t.size()){
        mp[t[i]]++;
        if(i != t.size()-1 && i%2 == 0){
            if(t[i] != t[i+1]) ok = false;
        }
    }

    for(auto p : mp){
        if(p.second != 2) ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}