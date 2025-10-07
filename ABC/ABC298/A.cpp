#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    map<char,int> m;
    rep(i,n){
        m[s[i]]++;
    }
    if(m.find('o') != m.end() && m.find('x') == m.end()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;   
}