#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    vector<string> t;
    cin >> s;
    rep(i,s.size()){
        t.push_back(s);
        char c = s[0];
        s.erase(s.begin());
        s.push_back(c);
    }
    sort(t.begin(),t.end());
    cout << t[0] << endl;
    cout << t[t.size()-1] << endl;
    return 0;
}