#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> h(n,0);
    rep(i,k){
        int a, b;
        cin >> a >> b;
        a--;b--;
        h[a]++;
        if(h[a] == m) cout << a+1 << ' ';
    }
    cout << endl;
    return 0;

}