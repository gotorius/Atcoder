#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int q;
    cin >> q;
    vector<int> c;
    rep(i,100){
        c.push_back(0);
    }
    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            c.push_back(x);
        }else{
            int ans = c.back();
            c.pop_back();
            cout << ans << endl;            
        }
    }
    return 0;

}