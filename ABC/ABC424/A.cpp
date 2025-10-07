#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    set<int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    if(st.size() <= 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}