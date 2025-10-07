#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string a, b;
    cin >> a >> b;
    string ans = "Easy";
    int n = min(a.size(),b.size());
    rep(i,n){
        if((a[a.size()-i-1])-'0' + b[b.size()-i-1]-'0' >= 10){
            ans = "Hard";
        }
    }
    cout << ans << endl;
    return 0;

}
