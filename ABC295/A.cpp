#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<string> w(n);
    rep(i,n) cin >> w[i];

    rep(i,n){
        if(w[i] == "and" || w[i] == "not" || w[i] == "that" || w[i] == "the" || w[i] == "you"){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;   
}