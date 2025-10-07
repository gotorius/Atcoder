#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main(void){
    ll n, k;
    cin >> n >> k;
    ll num = pow(2,n);
    if(k % num == 0){
        cout << 0 << endl;
        rep(i,num) cout << k/num << ' ';
    }
    else{
        ll a = k%num;
        ll b = (k-a)/num;
        cout << a << endl;
        rep(i,num-1) cout << b << ' ';
        cout << b+a << endl;
    }
    return 0;

}