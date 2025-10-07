#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int t;
    cin >> t;
    vector<int> n(t), d(t), k(t);
    rep(i,t){
        cin >> n[i] >> d[i] >> k[i];
    }
    int now = 1, a = 0, x;
    while(now < t){
        map<int, int> p;
        p[0]++;
        a = 0;
        cout << a << endl;
        while(n[now] == n[now-1] && d[now] == d[now-1]){
            x = (a+d[now]) % n[now];
            while(p.find(x) != p.end()) x = (x+1) % n[now];

        }
    }
    return 0;
}
