#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, q;
    cin >> n >> q;
    vector<int> a(n,1);

    int now = 0;
    rep(i,q){
        int x, y;
        cin >> x >> y;
        x--;y--;
        if(x < now) cout << 0 << endl;
        else{
            int cnt = 0;
            while(now <= x){
                cnt += a[now];
                now++;
            }
            a[y] += cnt;
            cout << cnt << endl;
        }
    }
    return 0;

}