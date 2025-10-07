#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, r, c;
    cin >> n >> r >> c;
    string s;
    cin >> s;
    
    set<P> st;
    P now = {0,0};
    st.insert(now);

    rep(i,s.size()){
        if(s[i] == 'N'){
            now.first++;
            r++;
        }else if(s[i] == 'S'){
            now.first--;
            r--;
        }else if(s[i] == 'W'){
            now.second++;
            c++;
        }else{
            now.second--;
            c--;
        }
        st.insert(now);
        if(st.count({r,c})){
            cout << 1;
        }else{
            cout << 0;
        }
    }
    cout << endl;
    return 0;

}