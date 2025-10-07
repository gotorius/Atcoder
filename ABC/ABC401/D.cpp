#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
int main(void){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    rep(i,s.size()){
        if(s[i] == 'o') continue;
        else if(s[i] == '.') continue;
        else{
            if(i > 0 && s[i-1] == 'o') s[i] = '.';
            if(i < s.size()-1 && s[i+1] == 'o') s[i] = '.';
        }
    }
    int cnt = 0;
    string t = s;
    rep(i,s.size()) if(s[i] == '?') cnt++, t[i] = 'o';
    if(cnt > k) cout << s << endl;
    else cout << t << endl;
    return 0;
}