#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    rep(i,n){
        cout << s[i] << s[i];
    }
    cout << endl;
    return 0;
}
