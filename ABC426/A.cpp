#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

// "Ocelot", "Serval", "Lynx"

int main(void){
    string x, y;
    cin >> x >> y;
    map<string,int> mp;
    mp["Ocelot"] = 1;
    mp["Serval"] = 2;
    mp["Lynx"] = 3;
    if(mp[x] >= mp[y]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}