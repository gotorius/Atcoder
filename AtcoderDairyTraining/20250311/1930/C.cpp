#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    string s;
    cin >> n >> s;

    rep(l,n-1){
        int cnt = 0;
        rep(k,n-l-1){
            if(s[k] == s[k+l+1]) break;
            else cnt++;
        }
        cout << cnt << endl;
    }
    return 0;

}