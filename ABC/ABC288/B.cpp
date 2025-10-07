#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    vector<string> a;
    rep(i,n){
        cin >> s[i];
    }
    rep(i,k){
        a.push_back(s[i]);
    }
    sort(a.begin(), a.end());

    rep(i,k) cout << a[i] << endl;
    return 0;
}
