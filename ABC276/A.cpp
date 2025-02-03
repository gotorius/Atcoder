#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;
    rep(i,s.size()){
        if(s[s.size()-i-1] == 'a'){
            cout << s.size()-i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
   
}