#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> st;
    rep(i,n){
        cin >> a[i];
        st.insert(a[i]);
    }
    sort(a.begin(), a.end());

    int ans = 0;
    rep(i,n){
        if(st.count(i+1) == 1){
            st.erase(i+1);
            ans++;
        }else if(st.count(i+1) == 0 && st.size() > 1){
            st.erase(a.back());
            a.pop_back();
            st.erase(a.back());
            a.pop_back();
            ans++;
        }else{
            cout << ans << endl;
            return 0;
        }
    }
    return 0;    
}