#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    set<char> st;
    rep(i,abc.size()){
        st.insert(abc[i]);
    }
    string s;
    cin >> s;
    rep(i,s.size()){
        if(st.count(s[i])){
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}