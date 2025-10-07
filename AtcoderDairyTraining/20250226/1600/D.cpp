#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int now;
    cin >> now;

    vector<int> b;
    b.push_back(now);
    while(now != 0){
        int a;
        cin >> a;
        b.push_back(a);
        now = a;
    }

    rep(i, b.size()){
        cout << b[b.size()-i-1] << endl;
    }
    return 0;
}