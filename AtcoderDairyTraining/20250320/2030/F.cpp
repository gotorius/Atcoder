#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<string> s(n);
    map<string, int> mp;
    rep(i,n) cin >> s[i];

    rep(i,n){
        if(mp.find(s[i]) == mp.end()){
            cout << s[i] << endl;
            mp[s[i]]++;
        }else{
            cout << s[i] << '(' << mp[s[i]] << ')' << endl;
            mp[s[i]]++;
        }
    }
    return 0;
}