#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll a, b;
    cin >> a >> b;
    ll num = 0;
    ll ans = 0;
    while(a != b){
        if(a > b){
            num = a / b;
            if(num > 1) num--;
            a -= b * num;
            ans += num;
        }else{
            num = b / a;
            if(num > 1) num--;
            b -= a * num;
            ans += num;
        }
    }
    cout << ans << endl;
    return 0;
}