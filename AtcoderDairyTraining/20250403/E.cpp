#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<P> st;
    P now = {0,0};
    st.insert(now);
    rep(i,n){
        if(s[i] == 'L') now.first--;
        else if(s[i] == 'R') now.first++;
        else if(s[i] == 'U') now.second--;
        else if(s[i] == 'D') now.second++;
        st.insert(now);
    }
    if(st.size() == n+1) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}