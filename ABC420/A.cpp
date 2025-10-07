#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int x, y;
    cin >> x >> y;
    if(x+y > 12) cout << x+y-12 << endl;
    else cout << x+y << endl;
    return 0;
}