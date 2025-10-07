#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, cnt = 0;
    cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        if(s == "For") cnt++;
    }
    if(n < 2*cnt){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
   
}
