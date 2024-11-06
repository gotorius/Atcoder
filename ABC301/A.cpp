#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    int a = 0, t = 0;
    rep(i,n){
        if(s[i] == 'A') a++;
        else t++; 
    }
    if(a > t) cout << 'A' << endl;
    else if(t > a) cout << 'T' << endl;
    else if(a == t){
        if(s[n-1] == 'A'){
            cout << 'T' << endl;
        }else{
            cout << 'A' << endl;
        }
    }
    return 0;   
}
