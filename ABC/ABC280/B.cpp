#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i,n) cin >> s[i];

    int a = 0;
    rep(i,n){
        cout << s[i] - a << ' ';
        a += s[i]-a;
    }
    cout << endl;
    return 0;
   
}