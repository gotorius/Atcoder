#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    vector<vector<char>> t(n, vector<char>(n));
    rep(i,n)rep(j,n) cin >> s[i][j];
    rep(i,n)rep(j,n) cin >> t[i][j];

    int a = 0, b = 0, c = 0, d = 0;
    rep(i,n)rep(j,n) if(s[i][j] != t[i][j]) a++;
    rep(i,n)rep(j,n) if(s[j][n-1-i] != t[i][j]) d++;
    rep(i,n)rep(j,n) if(s[n-1-i][n-1-j] != t[i][j]) c++;
    rep(i,n)rep(j,n) if(s[n-1-j][i] != t[i][j]) b++;

    if(a <= b+1 && a <= c+2 && a <= d+3) cout << a << endl;
    else if(b+1 <= a && b+1 <= c+2 && b+1 <= d+3) cout << b+1 << endl;
    else if(c+2 <= a && c+2 <= b+1 && c+2 <= d+3) cout << c+2 << endl;
    else if(d+3 <= a && d+3 <= b+1 && d+3 <= c+2) cout << d+3 << endl;
    return 0;
}