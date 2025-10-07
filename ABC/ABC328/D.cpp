#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;
    stack<char> st;
    rep(i,s.size()){
        st.push(s[i]);
        while(st.size() > 2 && st.top() == 'C'){
            char x, y, z;
            x = st.top(); st.pop();
            y = st.top(); st.pop();
            z = st.top(); st.pop();
            if(x == 'C' && y == 'B' && z == 'A') continue;
            else{
                st.push(z);
                st.push(y);
                st.push(x);
                break;
            }
        }
    }
    string ans = "";
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}