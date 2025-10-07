#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//5　AtCoder Beginner Contest 095 C - Half and Half

int main(void){
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int ans = 0;
    if(a+b > 2*c){
        if(x > y){
            if(a*(x-y) < 2*c*(x-y)) ans = 2*c*y + a*(x-y);
            else ans = 2*c*y + 2*c*(x-y);
        }else{
            if(b*(y-x) < 2*c*(y-x)) ans = 2*c*x + b*(y-x);
            else ans = 2*c*x + 2*c*(y-x);
        }
    }else{
        ans = a*x + b*y;
    }
    cout << ans << endl;
    return 0;
}