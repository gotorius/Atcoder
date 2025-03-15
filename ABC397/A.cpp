#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    double a;
    cin >> a;
    if(a < 37.5) cout << 3 << endl;
    else if(a >= 37.5 && a < 38) cout << 2 << endl;
    else  cout << 1 << endl;
    return 0;

}
