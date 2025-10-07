#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    int x;
    cin >> x;
    x--;
    string y;
    cin >> y;
    if(s[x] == y) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}