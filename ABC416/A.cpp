#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    l--;
    bool ok = true;
    for(int i = l; i < r; i++){
        if(s[i] != 'o') ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}