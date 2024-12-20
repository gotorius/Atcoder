#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int> (w));
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
            if(a[i][j] != 0){
                char c = 'A' + a[i][j] - 1;
                cout << c;
            }else{
                cout << '.';
            }
        }
        cout << endl;
    }
    return 0;
}