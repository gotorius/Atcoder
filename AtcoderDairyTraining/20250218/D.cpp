#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, q;
    map<int, int> mp;
    cin >> n >> q;

    rep(i,q){
        int n1, n2;
        cin >> n1 >> n2;
        if(n1 == 1) mp[n2]++;
        if(n1 == 2) mp[n2] += 2;
        if(n1 == 3){
            if(mp[n2] > 1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
