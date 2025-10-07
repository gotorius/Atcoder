#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> b(n, vector<int>(n));
    rep(i,n)rep(j,n) cin >> a[i][j];
    rep(i,n)rep(j,n) cin >> b[i][j];

    bool ok = true;
    rep(i,n)rep(j,n){
        if(a[i][j] == 1 && b[i][j] == 0) ok = false;
    }
    if(ok){
        cout << "Yes" << endl;
        return 0;
    }

    ok = true;
    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(a[i][j] == 1 && b[n-i-1][n-j-1] == 0) ok = false;
        }
    }
    if(ok){
        cout << "Yes" << endl;
        return 0;
    }

    ok = true;
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 1 && b[n-i-1][j] == 0) ok = false;
        }
    }
    if(ok){
        cout << "Yes" << endl;
        return 0;
    }

    ok = true;
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(a[i][j] == 1 && b[i][n-j-1] == 0) ok = false;
        }
    }
    if(ok){
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
        return 0;
    }

}