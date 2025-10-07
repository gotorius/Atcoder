#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    vector<vector<int>> a(9,vector<int>(9));
    rep(i,9) rep(j,9) cin >> a[i][j];

    rep(i,9){
        set<int> ni;
        rep(j,9){
            ni.insert(a[i][j]);
        }
        if(ni.size() != 9){
            cout << "No" << endl;
            return 0;
        }
    }

    rep(j,9){
        set<int> nj;
        rep(i,9){
            nj.insert(a[i][j]);
        }
        if(nj.size() != 9){
            cout << "No" << endl;
            return 0;
        }
    }

    for(int i = 0; i < 9; i += 3){
        for(int j = 0; j < 9; j += 3){
            set<int> nij;
            for(int x = i; x < i+3; x++){
                for(int y = j; y < j+3; y++){
                    nij.insert(a[x][y]);
                }
            }
            if(nij.size() != 9){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}