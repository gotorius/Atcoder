#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    bool h = true, b = true;
    rep(i,s.size()){
        if(s[i] != t[i]) h = false;
    }

    rep(i,s.size()){
        if(s[s.size()-i-1] != t[t.size()-i-1]) b = false;
    }

    if(h && b) cout << 0 << endl;
    else if(h) cout << 1 << endl;
    else if(b) cout << 2 << endl;
    else cout << 3 << endl;
    return 0;


}
