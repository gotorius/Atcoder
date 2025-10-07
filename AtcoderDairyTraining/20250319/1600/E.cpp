#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int q;
    cin >> q;

    set<int> st;
    map<int,int> mp;
    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            st.insert(x);
            mp[x]++;
        }else if(num == 2){
            int x,c;
            cin >> x >> c;
            mp[x] -= min(mp[x],c);
            if(mp[x] == 0) st.erase(x);
        }else if(num == 3){
            cout << *st.rbegin()-*st.begin() << endl;
        }
    }
    return 0;
}