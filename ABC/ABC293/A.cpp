#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    map<int, int> m;
    rep(i,n){
        cin >> a[i];
        if(m.find(i+1) == m.end()){
            m[a[i]]++;
        }
    }
    rep(i,n){
        if(m.find(i+1) == m.end()){
            b.push_back(i+1);
        }
    }
    cout << b.size() << endl;
    rep(i, b.size()){
        cout << b[i] << ' ';
    }
    cout << endl;
    return 0;
}