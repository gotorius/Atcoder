#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    stack<char> st;
    map<char,int> mp;
    rep(i,n){
        if(s[i] == '('){
            st.push(s[i]);
        }
        if(s[i] != '(' && s[i] != ')'){
            st.push(s[i]);
            if(mp.find(s[i]) == mp.end()) mp[s[i]] = 1;
            else{
                cout << "No" << endl;
                return 0;
            }
        }
        if(s[i] == ')'){
            while(st.top() != '('){
                mp.erase(st.top());
                st.pop();
            }
            st.pop();
        }
    }
    cout << "Yes" << endl;
    return 0;   
}