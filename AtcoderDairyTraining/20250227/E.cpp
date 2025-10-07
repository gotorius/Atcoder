#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int q;
    cin >> q;

    set<int> st;
    map<int,int> a;
    rep(i,q){
        int qx;
        cin >> qx;
        if(qx == 1){
            int x;
            cin >> x;
            st.insert(x);
            a[x]++;
        }else if(qx == 2){
            int x;
            cin >> x;
            a[x]--;
            if(a[x] == 0) st.erase(x);
        }else if(qx == 3){
            cout << st.size() << endl;
        }
    }
    return 0;

}