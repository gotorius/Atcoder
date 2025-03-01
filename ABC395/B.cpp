#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;

    vector<vector<char>> s(n, vector<char>(n));
    rep(i,n){
        int j = n-i-1;
        if(i <= j){
            for(int x = i; x <= j; x++){
                for(int y = i; y <= j; y++){
                    if(i%2 == 0) s[x][y] = '#';
                    else s[x][y] = '.';
                }
            }
        }
    }
    rep(i,n)rep(j,n){
        cout << s[i][j];
        if(j == n-1) cout << endl;
    }
    return 0;

}
