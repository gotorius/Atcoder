#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    set<int> st;
    rep(i,n){
        int a;
        cin >> a;
        st.insert(a);
    }
    cout << st.size() << endl;
    return 0;
}