#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string x;
    cin >> x;
    int a = x[0]-'0', b = x[1]-'0', c = x[2]-'0', d = x[3]-'0';
    bool ok = true;
    if(a == b && b == c && c == d) ok = false;
    if(b == (a+1)%10 && c == (b+1)%10 && d == (c+1)%10) ok = false;
    if(ok) cout << "Strong" << endl;
    else cout << "Weak" << endl;
    return 0;
}
