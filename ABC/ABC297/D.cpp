#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll a, b;
    cin >> a >> b;

    ll cnt = 0;
    while(a != b){
        if(a < b){
            ll k = (b-1)/a;
            b = b - a*k;
            cnt += k;
        }else{
            ll k = (a-1)/b;
            a = a - b*k;
            cnt += k;
        }
    }
    cout << cnt << endl;
    return 0;
}