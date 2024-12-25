#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    string s, t;
    cin >> n >> k >> s;

    rep(i,n){
        if(s[i] == 'o' && k > 0){
            t.push_back(s[i]);
            k--;
        }else{
            t.push_back('x');
        }
    }
    cout << t << endl;
    return 0;
}
