#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, d;
    string s;
    cin >> n >> d >> s;

    int cnt = 0, ans = 0;
    rep(i,n){
        if(s[i] != '@'){
            cnt++;
        }
    }
    cout << cnt+d << endl;
    return 0;
   
}