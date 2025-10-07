#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    rep(i,n){
        for(int j=0; j<=i; j++){
            int x;
            cin >> x;
            x--;
            a[i].push_back(x);
        }
    }

    int now = 0;
    rep(i,n){
        int x;
        if(now >= i) x = a[now][i];
        else x = a[i][now];
        now = x;
    }

    cout << now+1 << endl;
    return 0;


}