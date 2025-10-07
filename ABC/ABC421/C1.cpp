#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    string s;
    cin >> n >> s;
    string x,y;
    rep(i,n){
        x += "AB";
        y += "BA";
    }


    ll ans1 = 0, ca = 0;
    rep(i,2*n){
        if(s[i] == 'A'){
            ans1 += abs(i-ca);
            ca += 2;
        }
    }

    ll ans2 = 0, cb = 0;
    rep(i,2*n){
        if(s[i] == 'B'){
            ans2 += abs(i-cb);
            cb += 2;
        }
    }

    cout << min(ans1, ans2) << endl;
    return 0;
}