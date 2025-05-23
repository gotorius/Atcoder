#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m, q;
    cin >> n >> m >> q;
    vector<set<int>> st(n);
    vector<int> all(n,0);
    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int x, y;
            cin >> x >> y;
            x--; y--;
            st[x].insert(y);
        }else if(num == 2){
            int x;
            cin >> x;
            x--;
            all[x] = 1;
        }else{
            int x, y;
            cin >> x >> y;
            x--; y--;
            if(all[x] == 1 || st[x].find(y) != st[x].end()){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
