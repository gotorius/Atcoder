#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n, a, b;
    cin >> n >> a >> b;
    ll p, q, r, s;
    cin >> p >> q >> r >> s;

    vector<vector<char>> grid(q-p, vector<char>(s-r,'.'));

    ll p1 = max(1-a, 1-b);
    ll p2 = min(n-a, n-b);
    ll p3 = max(1-a,b-n);
    ll p4 = min(n-a, b-1);

    while(p1 <= p2){
        if(p <= a+p1 && q > a+p2 && r <= b+p1 && s > b+p2){
            grid[a+p1-1][b+p1-1] = '#';
        }else{
            
        }
    }

}