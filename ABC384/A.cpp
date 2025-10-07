#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    char c1, c2;
    cin >> n >> c1 >> c2;
    string s;
    cin >> s;

    rep(i,n){
        if(s[i] != c1){
            s[i] = c2;
        }
        cout << s[i]; 
    }
    cout << endl;
    return 0;   
}