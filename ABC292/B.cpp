#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> x(n,0);
    rep(i,q){
        int q1,q2;
        cin >> q1;

        if(q1 == 3){
            cin >> q2;
            if(x[q2] != 2) cout << "No" << endl;
            else cout << "Yes" << endl;
        }else if(q1 == 2){
            cin >> q2;
            x[q2] = 2;
        }else if(q1 == 1){
            cin >> q2;
            if(x[q2] != 2) x[q2]++;
        }
    }
    return 0;
}