#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    map<int,int> mp;
    rep(i,m){
        int a;
        char b;
        cin >> a >> b;
        a--;
        if(b == 'M') mp[a]++;

        if(mp[a] == 1 && b == 'M') cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}