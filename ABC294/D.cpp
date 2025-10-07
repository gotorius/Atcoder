#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, q;
    cin >> n >> q;

    int call = 0;
    set<int> st;
    rep(i,q){
        int num; 
        cin >> num;
        if(num == 1){
            st.insert(call);
            call++;
        }else if(num == 2){
            int x;
            cin >> x;
            x--;
            st.erase(x);
        }else if(num == 3){
            cout << *st.begin()+1 << endl;
        }
    }
    return 0;
}
