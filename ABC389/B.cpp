#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll x;
    cin >> x;

    ll s = 1;
    int ans = 1;
    while(s != x){
        ans++;
        s *= ans;
    }
    cout<< ans << endl;
    return 0;
   
}