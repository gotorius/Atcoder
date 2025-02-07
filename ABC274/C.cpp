#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> s(2*n+4, -1);
    s[1] = 0;
    rep(i,n){
        cin >> a[i];
        int x = 2*(i+1), y = 2*(i+1)+1;
        s[x] = s[a[i]]+1;
        s[y] = s[a[i]]+1;
    }
    rep(i,2*n+1) cout << s[i+1] << endl;
    return 0;
   
}