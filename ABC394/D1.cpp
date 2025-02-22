#include <bits/stdc++.h>
using namespace std;

bool f(string s) {
    stack<char> st;
    map<char, char> mp = {{')', '('}, {'>', '<'}, {']', '['}};
    for (char c : s) {
        if (c == '(' || c == '<' || c == '[') {
            st.push(c);
        } else if (c == ')' || c == '>' || c == ']') {
            if (st.empty() || st.top() != mp[c]) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    if (f(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
