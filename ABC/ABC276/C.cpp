#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];

    int num = 0;
    for(int i = n-1; i >= 0; i--){
        if(p[i] < p[i-1]){
            int x = i;
            while(p[x] < p[i-1] && x != n-1) x++;
            if(x != n-1) x--;
            num = i;
            swap(p[i-1],p[x]);
            break;
        }
    }

    if(num != 0) sort(p.begin()+num, p.end(), greater());
    rep(i,n) cout << p[i] << ' ';
    cout << endl;
    return 0;
}